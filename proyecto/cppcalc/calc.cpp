#include <iostream>
#include <sstream>
#include <string>
#include "calcex.h"
#include "calculator.h"

using namespace std;

Calculator *calc;

int main(int argc, char *argv[]) {
    string line;

    try {

        cout << ">";
        while(getline(cin, line))
        {
            calc = new Calculator();
            int result = calc->eval(line);
            cout << "=>" << result << endl;
            cout << ">";
        }
        delete calc;

    }
    catch (Exception ex) {
        cout << "Program Aborted due to exception!" << endl;
    }
}
   
