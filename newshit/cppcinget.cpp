#include <iostream>
int main(){
    
    int c1;
    char c2;

    std::cout << "文字を入力してください" << std::endl;
    c1 = std::cin.get();

    std::cout << "文字を入力してください" << std::endl;
    std::cin.ignore(1024,'\n');
    std::cin.get(c2);

    std::cout << "\n入力した文字\n";
    std::cout << (char)c1 << "\n";
    std::cout << c2 << std::endl;

    std::cin.ignore(1024,'\n');
    std::cin.get();
}
