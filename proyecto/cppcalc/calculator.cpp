#include "calculator.h"
#include "parser.h"
#include <sstream>


Calculator::Calculator() :
        memory(0), variableMemory() { }

int Calculator::eval(string expr) {

    Parser *parser = new Parser(new istringstream(expr));
    AST *tree = parser->parse();
    int result = tree->evaluate();

    delete tree;
    delete parser;
    return result;
}

void Calculator::store(int val) {
    memory = val;
}

int Calculator::recall() {
    return memory;
}

int Calculator::plus(int n) {
    memory += n;
    return memory;
}

int Calculator::minus(int n) {
    memory += n;
    return memory;
}

int Calculator::clear() {
    memory = 0;
}

void Calculator::storevar(string name, int val){
    variableMemory[name] = val;
}

int Calculator::recallvar(string name){
    if(variableMemory[name])
        return variableMemory[name];
    else
        return 0;
}
