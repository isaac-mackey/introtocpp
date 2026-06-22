#include <iostream>
#include <bitset>

int main(){

std::cout << "\nint bits\n";
int x = 0;
std::cout << std::bitset<32>(x) << "\n";

std::cout << std::bitset<32>(1024) << "\n";

std::cout << std::bitset<32>(2048) << "\n";

std::cout << "\ndouble bits\n";

double d = 20.2;
std::cout << std::bitset<32>(d) << "\n";

std::cout << "\nchar bits\n";

char c = 'a';

std::cout << std::bitset<32>(c) << "\n";

std::cout << std::bitset<32>(97) << "\n";

return 0;
}
