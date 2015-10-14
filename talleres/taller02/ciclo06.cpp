#include <iostream>

int main()
{
    int from;
    while(std::cin >> from)
    {
        int to, result;
        result = 0;
        std::cin >> to;

        for(int i = from; i <= to; ++i)
        {
            result += i;
        }

        std::cout << result << std::endl;
    }

    return 0;
}