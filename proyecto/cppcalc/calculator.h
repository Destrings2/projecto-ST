#ifndef calculator_h
#define calculator_h

#include <string>
#include <map>
#include <deque>

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

    void setPrefEnv(bool set);

    bool getPreferEnv();

    bool isAssignPerformed();

    void setAssignPerformed(bool assignPerformed);

    void addFile(string filename);

    int getFileNumber();

    deque<string> &getQueue();

    deque<string> &getLog();
private:
    int memory;

    map<string, int> variableMemory;

    deque<string> files;

    deque<string> assignLog;


    bool preferEnv;

    bool assignPerformed = false;
};

extern Calculator *calc;

#endif

