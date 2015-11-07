#include <iostream>
#include <string>

using namespace std;

int main() {
    char *line = new char[256];
    string glue = "";
    bool glued = false;
    while(cin.getline(line, 256, '\n'))
    {
        string str = line;
        unsigned long find = str.rfind('\\');
        bool found = (find != string::npos);
        if(found)
        {
            string cut = str.substr(0,find);
            glue.append(cut);
            glued = true;
        } else if(not found and glued){
            glue.append(str);
            cout << glue << endl;
            glue = "";
            glued = false;
        } else
            cout << str << endl;
    }
    if(glued) cout << glue << endl;
    return 0;
}
