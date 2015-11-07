#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main(int argc, const char *argv[])
{
    ifstream file;
    int number = 0;
    float totalGrade = 0;
    for(int i = 1; i < argc; ++i) {
        file.open(argv[i]);
        char *line = new char[256];
        while (file.getline(line, 256, '\n')) {
            istringstream filestream(line);
            string name;
            float grade1, grade2;
            filestream >> name >> grade1 >> grade2;
            float total = (grade1 + grade2) / 2;
            cout << name << ": " << total << endl;
            ++number;
            totalGrade += total;
        }
        file.close();
    }
    cout << "Total students: " << number << endl;
    if(number > 0 ) cout << "Average grade: " << totalGrade/number << endl;
    return 0;
}
