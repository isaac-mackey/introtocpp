#include <iostream>

// testing operations on numerical types
int main() {

// initialization and assignment
int test = 9;
test = 10;
std::cout << "test: " << test << "\n";

// initialization
int zero = 0;
std::cout << "zero: " << zero << "\n";

int one = 1;
std::cout << "one: " << one << "\n";

// addition
int sum = zero + one;
std::cout << "sum: " << sum << "\n";

// initialization of a double
double four_half = 4.5;
std::cout << "one: " << one << "\n";

// multiplication
double double_four_half = 2 * four_half;
std::cout << "double_four_half: " << double_four_half << "\n";

// multiplication
double square_four_half = four_half * four_half;
std::cout << "square_four_half: " << square_four_half << "\n";

return 0;
}
