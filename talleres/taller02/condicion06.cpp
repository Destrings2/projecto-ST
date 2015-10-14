#include <iostream>

int main()
{
    char col, row;

    std::cin >> col >> row;
    std::cout << (((col+row)%2 == 0) ? "blanco" : "negro") << std::endl;

    return 0;
}