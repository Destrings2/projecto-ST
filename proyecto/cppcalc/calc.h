#pragma once

#include <string>

using std::string;

extern int memory;

void initEnvVars(const char *env[]);
void initParamVars(int size, const char *env[]);

void interactiveMode();
void fileMode();

inline bool isStrDigit(string str)
{
    for(unsigned int i = 0; i < str.length(); ++i)
    {
        if(!isdigit(str.at(i)))
            return false;
    }
    return true;
}

inline bool isCalcVar(string var)
{
    return (var.find("CALCVAR") != string::npos) and (var.find("=") != string::npos);
}

inline bool isEnvPref(int argc, const char **argv)
{
    for(int i = 0; i < argc; ++i)
    {
        string str = argv[i];
        if(str == "-e")
            return true;
    }
    return false;
}

void initExternVars(int argc, const char *argv[], const char *env[]);