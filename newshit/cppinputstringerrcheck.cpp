#include <stdio.h>
#include <iostream>
#include <iomanip>

int main()
{

    char str[32];

    std::cout << "文字列を入力してください" << std::endl;

    // only 32 words in str
    std::cin >> std::setw(32) >> str;

    std::cout << "\nstr:" << str << std::endl;
    std::cin.ignore(1024, '\n');
    getchar();
}