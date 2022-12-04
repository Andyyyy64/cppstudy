#include <stdio.h>
#include <iostream>

int main () {
    const char *str = "hello";
    const char *str2 = "world";
    int number = 10;

    printf("%s %s %d\n",str,str2,number);


    std::cout << str << " " << str2 << " " << number << "\n";

    getchar();
}