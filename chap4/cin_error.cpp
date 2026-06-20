#include <iostream>
int main(){
double d;
std::cin >> d;
if (!std::cin) std::cout << "std::cin error" << "\n";
std::cout << "double d: " << d << "\n";
return 0;
}
