#include <iostream>
#include <bitset>

int main(){

std::cout << "\nstring bitset\n";
std::string s = "test me!";

std::cout << "\n8 bits\n";
for(char c : s){
	std::cout << "char: " << c << "- " << std::bitset<8>(c) << "\n";
}

std::cout << "\n16 bits\n";
for(char c : s){
	std::cout << "char: " << c << "- " << std::bitset<16>(c) << "\n";
}

return 0;
}
