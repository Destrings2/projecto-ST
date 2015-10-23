#ifndef calculator_h
#define calculator_h

#include <string>
#include <map>

using namespace std;


class Calculator {
public:
    Calculator();

    int eval(string expr);

    void store(int val);

    int recall();

    int clear();

    int plus(int n);

    void storevar(string name, int val);

    int recallvar(string name);

    int minus(int n);

private:
    int memory;
    map<string, int> variableMemory;
};

extern Calculator *calc;

#endif

