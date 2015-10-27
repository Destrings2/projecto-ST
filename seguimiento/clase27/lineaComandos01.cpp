
/*
 * fichero: lineaComandos01.cpp
 * compile: $ g++ -o lineaComandos01 lineaComandos01.cpp
 * ejecutar: $ ./lineaComandos01
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {

  for (int i = 0; i < argc; i++) {
    cout << "Comando: " << argv[i] << endl;
  }

  return 0;
}
