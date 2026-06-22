#include <iostream>

int main(){

int x = 1001;
double d = 7.7;
char c = 'x';

double double_from_int = x;
std::cout << "double_from_int: " << double_from_int << "\n";

char char_from_int = x;
std::cout << "char_from_int: " << char_from_int << "\n";

int int_from_double = d;
std::cout << "int_from_double: " << int_from_double << "\n";

char char_from_double = d;
std::cout << "char_from_double: " << char_from_double << "\n";

int int_from_char = c;
std::cout << "int_from_char: " << int_from_char << "\n";

double double_from_char = c;
std::cout << "double_from_char: " << double_from_char << "\n";

return 0;
}

