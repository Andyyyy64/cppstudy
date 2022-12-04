#include <stdio.h>
#include <iostream>

int main()
{
    // one single string
    std::cout.put('A');
    std::cout.put('\n');

    // string
    std::cout.write("ABCDF\n", 6);
    std::cout.write("ABCDF\n",3);

    getchar();
}