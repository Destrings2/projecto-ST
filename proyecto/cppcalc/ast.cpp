#include "ast.h"
#include <iostream>
#include "calculator.h"


UnaryNode::UnaryNode(AST *sub) :
        AST(),
        subTree(sub) { }

UnaryNode::~UnaryNode() {
#ifdef debug
    cout << "In UnaryNode destructor" << endl;
#endif

    try {
        delete subTree;
    } catch (...) { }
}

AST *UnaryNode::getSubTree() const {
    return subTree;
}

AddNode::AddNode(AST *left, AST *right) :
        BinaryNode(left, right) { }

int AddNode::evaluate() {
    return getLeftSubTree()->evaluate() + getRightSubTree()->evaluate();
}

SubNode::SubNode(AST *left, AST *right) :
        BinaryNode(left, right) { }

int SubNode::evaluate() {
    return getLeftSubTree()->evaluate() - getRightSubTree()->evaluate();
}

NumNode::NumNode(int n) :
        AST(),
        val(n) { }

int NumNode::evaluate() {
    return val;
}

StoreNode::StoreNode(AST *sub) : UnaryNode(sub) { }

int StoreNode::evaluate() {
    int result = getSubTree()->evaluate();
    calc->store(result);
    return result;
}

DivideNode::DivideNode(AST *left, AST *right) :
        BinaryNode(left, right) { }

int DivideNode::evaluate() {
    return getLeftSubTree()->evaluate() / getRightSubTree()->evaluate();
}

TimesNode::TimesNode(AST *left, AST *right) :
        BinaryNode(left, right) { }

int TimesNode::evaluate() {
    return getLeftSubTree()->evaluate() * getRightSubTree()->evaluate();
}

RecallNode::RecallNode() { }

int RecallNode::evaluate() {
    return calc->recall();
}

ModNode::ModNode(AST *left, AST *right) : BinaryNode(left, right){ }

MemPlusNode::MemPlusNode(AST *sub) : UnaryNode(sub) {}

int MemPlusNode::evaluate() {
    int result = getSubTree()->evaluate();
    result = calc->plus(result);
    return result;
}

MemMinusNode::MemMinusNode(AST *sub) : UnaryNode(sub) {}

int MemMinusNode::evaluate() {
    int result = getSubTree()->evaluate();
    result = calc->minus(result);
    return result;
}

int ModNode::evaluate() {
    return  getLeftSubTree()->evaluate() % getRightSubTree()->evaluate();
}

ClearNode::ClearNode() {}

int ClearNode::evaluate() {
    calc->clear();
    return 0;
}

AssignNode::AssignNode(AST_<std::string> *left, AST *right) : BinaryNode_<string, int>(left, right){ }

int AssignNode::evaluate(){
    int result = getRightSubTree()->evaluate();
    std::string name = getLeftSubTree()->evaluate();
    calc->storevar(name, result);
    calc->setAssignPerformed(true);
    cout << "=> " <<  name << " <- ";
    return result;
}

IdentifierNode::IdentifierNode(std::string str) : AST_<std::string>(), val(str){ }

std::string IdentifierNode::evaluate(){
    return val;
}
