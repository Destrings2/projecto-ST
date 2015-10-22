#ifndef calculator_h
#define calculator_h

#include <string>

using namespace std;


class Calculator {
public:
    Calculator();

    int eval(string expr);

    void store(int val);

    int recall();

    int clear();

    int plus(int n);

    void savevar(string name, int val);

    int recallvar(string name);

    int minus(int n);

private:
    int memory;
};

extern Calculator *calc;

#endif

