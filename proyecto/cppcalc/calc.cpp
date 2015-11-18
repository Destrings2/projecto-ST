#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "calc.h"
#include "calculator.h"

using namespace std;

Calculator *calc;

int main(int argc, const char *argv[], const char *env[]){
    calc = new Calculator();
    calc->setPrefEnv(isEnvPref(argc, argv));
    initExternVars(argc, argv, env);

    if(calc->getFileNumber() > 0)
        fileMode();
    else
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
            if(pos != string::npos){
                string name = str.substr(0, pos);
                string value = str.substr(pos + 1, string::npos);
                if(isStrDigit(value)){
                    int val = atoi(value.c_str());
                    calc->storevar(name, val);
                }
            }
        }
    }
}

void initParamVars(int size, const char **param){
    for(int i = 1; i < size; ++i)
    {
        string str = param[i];
        if(str == "-v")
        {
            str = param[++i];
            unsigned int pos = str.find("=");
            if(pos != string::npos){
                string name = str.substr(0, pos);
                string value = str.substr(pos + 1, string::npos);
                if(isStrDigit(value)){
                    int val = atoi(value.c_str());
                    calc->storevar(name, val);
                }
            }
        }
        else if(str != "-e")
        {
            calc->addFile(str);
        }
    }
}

void interactiveMode(){
    string line;

    while(getline(cin, line)){
        try{
            int result = calc->eval(line);
            if(calc->isAssignPerformed()){
                cout << result << " [";
                for(std::deque<string>::iterator iterator = calc->getLog().begin(); iterator != calc->getLog().end()-1; ++iterator)
                {
                    cout << *iterator << ", ";
                }
                cout << calc->getLog().back() << "]" << endl;
                calc->setAssignPerformed(false);
                calc->getLog().clear();
            }
            else
                cout << "=> " << result << endl;
        }catch(...){
            cout << "* parse error" <<endl;
        }
    }
}

void fileMode(){
    ifstream file;
    string line;
    for(string filename : calc->getQueue()){
        file.open(filename);
        if(!file.fail()){
            while(getline(file, line)){
                try{
                    int result = calc->eval(line);
                    if(calc->isAssignPerformed()){
                        cout << result << endl;
                        calc->setAssignPerformed(false);
                    }
                    else
                        cout << "=> " << result << endl;
                } catch(...){
                    cout << "* parse error" << endl;
                }
            }
            file.close();
        } else{
            cout << "Fallo al abrir el archivo " << filename;
        }
    }
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
