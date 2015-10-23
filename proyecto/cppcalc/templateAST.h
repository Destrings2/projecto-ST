#pragma once
#include "string"

template <typename T>
class AST_ {
public:
    AST_() = default;

    virtual ~AST_() = default;

    virtual T evaluate() = 0;
};

typedef AST_<int> AST;

template <typename L, typename R>
class BinaryNode_ : public AST {
public:
    BinaryNode_(AST_<L> *left, AST_<R> *right) : AST(), leftTree(left), rightTree(right) { };

    ~BinaryNode_(){
        try {
            delete leftTree;
        } catch (...) { }

        try {
            delete rightTree;
        } catch (...) { }
    }

    AST_<L> *getLeftSubTree() const{
        return leftTree;
    }

    AST_<R> *getRightSubTree() const{
        return rightTree;
    }

private:
    AST_<L> *leftTree;
    AST_<R> *rightTree;
};

typedef BinaryNode_<int, int> BinaryNode;