
/*
 * fichero: entrada09.cpp
 * compilar: $ g++ -o entrada09 entrada09.cpp
 * ejecutar: $ ./entrada09
 * proposito: Mostrar como se leen datos de la entrada estandar.
 *            utilizando flujos de tipo string
 */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const int MAXBUF = 256;

using namespace std;

int
main() {

  char buffer[MAXBUF];
  ifstream filein("ficheroentrada09.txt");
  ofstream fileout("ficherosalida09.txt", ios_base::out);
  
  while (filein.getline(buffer,MAXBUF)) {

    string buffer2(buffer);
    istringstream ins(buffer2);

    int number1;
    char c;
    int number2;
    char cadena2[MAXBUF];

    ins >> number1 >> c >> number2 >> cadena2;

    //ins.getline(cadena2, MAXBUF, ':');

    cout << "Number1: " << number1
	 << "Character: " << c
         << " Number2: " << number2
         << " Cadena2: "
         << cadena2 << endl;

  }

  return 0;

}
