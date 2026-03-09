#include <iostream>
#include <string>

int main(){
string name; //переменная имени
std::cout << "Введите имя: ";  
std::cin >> name;   //ввод имени
std::cout<<"Hello World from " << name << "!" << std::endl; //вывод предложения
return 0;
}
