#include <iostream>

#define BUFFER 32

int main(){
    char str1[BUFFER];
    char str2[BUFFER];

    std::cout << "文字を入力してください" << std::endl;
    std::cin.getline(str1,BUFFER);
    if(!std::cin.good()){
        std::cin.clear();
        std::cin.ignore(1024,'\n');
    }
    std::cout << "文字を入力してください" << std::endl;
    std::cin.getline(str2,BUFFER,'\n');
    if(!std::cin.good()){
        std::cin.clear();
        std::cin.ignore(1024,'\n');
    }
    std::cout << "\n入力した文字列\n";
    std::cout << str1 << '\n';
    std::cout << str2 << std::endl;

    std::cin.get();
}