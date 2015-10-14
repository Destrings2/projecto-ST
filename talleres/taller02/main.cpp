#include <iostream>
#include "funciones.h"

int main()
{
	int a,b,c,r;
	std::cin >> a >> b >> c;
	r = sumaEnt(sumaEnt(multEnt(multEnt(c, sumaEnt(multEnt(a,b), c)), restaEnt(a,b)), a), b);
	std::cout << r;
	return 0;
}