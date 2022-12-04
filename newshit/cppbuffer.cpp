#include <stdio.h>
#include <iostream>

int main (){
    std::cout << "ABCDEF\n";
    std::cout << "ABCDEF\n" << std::flush;
    std::cout << "ABCDEF" << std::endl;

    getchar();
}