#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if(a == b and b == c)
        std::cout << "equilatero" << std::endl;
    else if(a == b or b == c or a == c)
        std::cout << "isoceles" << std::endl;
    else
        std::cout << "escaleno" << std::endl;

    return 0;
}