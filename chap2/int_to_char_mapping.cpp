#include <iostream>

int main(){

std::cout << "int char" << "\n";

for(int i=0; i<256; i++){
	std::cout << "i: " << i << ", ";
	char c = i;
	std::cout << "c: " << c << "\n";
} 


return 0;
}
