#include <iostream>

#define BUFFER 32   

int main(){
    char str[BUFFER];
    char str2[BUFFER];

    std::cout << "文字を入力してください" << std::endl;
    std::cin.get(str,BUFFER);

    std::cout << "文字を入力してください" << std::endl;
    std::cin.ignore(1024,'\n');
    std::cin.get(str2,BUFFER,'\n');

    std::cout << "\n入力した文字\n" << std::endl;
    std::cout << str << '\n';
    std::cout << str2 << std::endl;

    std::cin.ignore(1024,'\n');
    std::cin.get();

}