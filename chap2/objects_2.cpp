#include <iostream>

int main()
{

std::cout << "Please enter your first name:\n";
std::string first_name = "???";
std::cin >> first_name;

std::cout << "Hello, " << first_name << "!\n";

std::cout << "Please enter your middle name:\n";
std::string last_name;
std::string middle_name;
std::cin >> middle_name;
std::cout << "Please enter your last name:\n";
std::cin >> last_name;

int age = -1;
std::cout << "Please enter your age:\n";
std::cin >> age;
std::cout << "Your full name is " << first_name << " " << middle_name << " " << last_name << " and you are " << age << " years old.\n";
}


