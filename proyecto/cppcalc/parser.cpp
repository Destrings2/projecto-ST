#include "parser.h"
#include "calcex.h"
#include "calculator.h"
#include <sstream>

Parser::Parser(istream *in) {
    scan = new Scanner(in);
}

Parser::~Parser() {
    try {
        delete scan;
    } catch (...) { }
}

AST *Parser::parse() {
    return Prog();
}

AST *Parser::Prog() {
    AST *result = Expr();
    Token *t = scan->getToken();

    if (t->getType() != eof) {
        throw ParseError;
    }

    return result;
}

AST *Parser::Expr() {
    return RestExpr(Term());
}

AST *Parser::RestExpr(AST *e) {
    Token *t = scan->getToken();

    if (t->getType() == add)
        return RestExpr(new AddNode(e, Term()));

    if (t->getType() == sub)
        return RestExpr(new SubNode(e, Term()));

    scan->putBackToken();

    return e;
}

AST *Parser::Term() {
    return RestTerm(Storable());
}

AST *Parser::RestTerm(AST *e){
    Token *t = scan->getToken();

    if (t->getType() == modulo)
        return RestTerm(new ModNode(e, Storable()));

    if (t->getType() == times)
        return RestTerm(new TimesNode(e, Storable()));

    if (t->getType() == divide)
        return RestTerm(new DivideNode(e, Storable()));

    scan->putBackToken();

    return e;
}

AST *Parser::Storable() {
    AST *result = Factor();
    Token *t = scan->getToken();
    if(t->getType() == keyword) {
        if (t->getLex() == "S") {
             return new StoreNode(result);
        }else if(t->getLex() == "P") {
            return new MemPlusNode(result);
        }else if(t->getLex() == "M") {
            return new MemMinusNode(result);
        }else{
            throw ParseError;
        }
    }
    scan->putBackToken();
    return result;
}

AST *Parser::Factor() {
    Token *t = scan->getToken();
    if (t->getType() == number){
        istringstream in(t->getLex());
        int val;
        in >> val;
        return new NumNode(val);
    }else if(t->getType() == identifier)
        return Assign(new IdentifierNode(t->getLex()));
    else if(t->getType() == keyword) {
        if (t->getLex() == "R")
            return new RecallNode();
        if (t->getLex() == "C")
            return new ClearNode();
        else{
            throw ParseError;
        }
    }
    else if(t->getType() == lparen)
    {
        AST *result = Expr();
        t = scan->getToken();
        if(t->getType() == rparen)
            return result;
    }
    throw ParseError;
}

AST* Parser::Assign(AST_<string>* e)
{
    Token *t = scan->getToken();
    if(t->getType() == assign)
    {
        AST* result = Expr();
        return new AssignNode(e, result);
    }

    int recall = calc->recallvar(e->evaluate());
    scan->putBackToken();
    return new NumNode(recall);
}
