#include <iostream>
#include <stdlib.h>
#include "calc.h"
#include "calculator.h"

using namespace std;

Calculator *calc;

int main(int argc, const char *argv[], const char *env[]){
    calc = new Calculator();
    calc->setPrefEnv(isEnvPref(argc, argv));
    initExternVars(argc, argv, env);

    interactiveMode();

    delete calc;
    return 0;
}

void initEnvVars(const char **env){
    while(*env != nullptr)
    {
        string str = *(env++);
        if(isCalcVar(str))
        {
            str = str.substr(7);
            unsigned int pos = str.find("=");
            string name = str.substr(0, pos);
            string value = str.substr(pos+1, string::npos);
            if(isStrDigit(value))
            {
                int val = atoi(value.c_str());
                calc->storevar(name, val);
            }
        }
    }
}

void initParamVars(int size, const char **param){
    for(int i = 0; i < size; ++i)
    {
        string str = param[i];
        if(str == "-v")
        {
            str = param[++i];
            unsigned int pos = str.find("=");
            string name = str.substr(0, pos);
            string value = str.substr(pos+1, string::npos);
            if(isStrDigit(value))
            {
                int val = atoi(value.c_str());
                calc->storevar(name, val);
            }
        }
    }
}

void interactiveMode(){
    string line;

    cout << ">";
    while(getline(cin, line)){
        try{
            int result = calc->eval(line);
            cout << "=>" << result << endl;
        }catch(...){
            cout << "* parse error" <<endl;
        }
        cout << ">";
    }
}

void fileMode(){

}

void initExternVars(int argc, const char **argv, const char **env){
    if(calc->getPreferEnv())
    {
        initParamVars(argc, argv);
        initEnvVars(env);
    }else{
        initEnvVars(env);
        initParamVars(argc, argv);
    }
}
