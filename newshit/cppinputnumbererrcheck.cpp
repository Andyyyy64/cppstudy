#include <stdio.h>
#include <iostream>

int main()
{

    int number;

    while (1)
    {
        std::cout << "整数を入力してください" << std::endl;
        std::cin >> number;

        if (std::cin.fail())
        {
            std::cout << "入力エラーです！" << std::endl;
            std::cin.clear();
            std::cin.ignore(1024, '\n');
            continue;
        }
        break;
    }

    std::cin.ignore(1024, '\n');
    std::cout << "\nnumber :" << number << std::endl;

    getchar();
}