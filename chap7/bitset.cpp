#include <iostream>
#include <bitset>

int main(){

int x = 0;
std::cout << std::bitset<32>(x) << "\n";

std::cout << std::bitset<32>(x+1) << "\n";

std::cout << std::bitset<32>(x) << "\n";

x++;

std::cout << std::bitset<32>(x) << "\n";

std::cout << std::bitset<32>(++x) << "\n";

return 0;
}
