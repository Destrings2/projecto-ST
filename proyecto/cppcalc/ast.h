#pragma once
#include "templateAST.h"

class UnaryNode : public AST {
public:
    UnaryNode(AST *sub);

    ~UnaryNode();

    AST *getSubTree() const;

private:
    AST *subTree;
};

class AddNode : public BinaryNode {
public:
    AddNode(AST *left, AST *right);

    int evaluate();
};

class AssignNode : public BinaryNode_<std::string, int> {
public:
    AssignNode(AST_<std::string> *left, AST *right);

    int evaluate();
};


class SubNode : public BinaryNode {
public:
    SubNode(AST *left, AST *right);

    int evaluate();
};

class TimesNode : public BinaryNode {
public:
    TimesNode(AST *left, AST *right);

    int evaluate();
};

class DivideNode : public BinaryNode {
public:
    DivideNode(AST *left, AST *right);

    int evaluate();
};

class StoreNode : public UnaryNode {
public:
    StoreNode(AST* sub);

    int evaluate();
};

class MemMinusNode : public UnaryNode {
public:
    MemMinusNode(AST* sub);

    int evaluate();
};

class MemPlusNode : public UnaryNode {
public:
    MemPlusNode(AST* sub);

    int evaluate();
};

class ModNode : public BinaryNode {
public:
    ModNode(AST *left, AST *right);

    int evaluate();
};

class NumNode : public AST {
public:
    NumNode(int n);

    int evaluate();

private:
    int val;
};

class IdentifierNode : public AST_<std::string> {
public:
    IdentifierNode(std::string str);

    std::string evaluate();

private:
    std::string val;
};

class RecallNode : public AST {
public:
    RecallNode();

    int evaluate();

};

class ClearNode : public AST {
public:
    ClearNode();

    int evaluate();

};