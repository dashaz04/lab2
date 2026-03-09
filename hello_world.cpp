#include <iostream>
#include <string>

int main(){
//переменная имени:
string name;
std::cout << "Введите имя: ";  
//ввод имени:
std::cin >> name; 
std::cout<<"Hello World from " << name << "!" << std::endl; //вывод предложения
return 0;
}
