#include <iostream>

constexpr double half(double d) { return d/2; }

int main(){

double x1 = half(7);
double x2 = half(x1);

std::cout << "x1: " << x1 << "\n";
std::cout << "x2: " << x2 << "\n";

// default initialization of const double will cause compilation error
// constexpr double y1;
double y1;
std::cin >> y1;

std::cout << "y1: " << y1 << "\n";

double y2 = half(y1);

std::cout << "y2: " << y2 << "\n";

return 0;
}


