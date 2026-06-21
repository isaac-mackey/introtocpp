#include <iostream>
int main(){
double d;
std::cin >> d;

// yields error if d is not double type
if (!std::cin) std::cout << "std::cin error" << "\n";
std::cout << "double d: " << d << "\n";
return 0;
}
