#include <iostream>
#include <vector>

int main(){

std::vector<int> numbers;
numbers.push_back(1);

std::cout << "Size: " << numbers.size() << "\n";

try {

for(int i = 0; i <= numbers.size()+1; i++){
	std::cout << "number: " << numbers[i] << "\n";
	if (i >= numbers.size()){
	throw std::runtime_error("out of range");
	}	
}
}
catch (std::runtime_error& e) {
	std::cerr << "runtime error: " << e.what() << "\n";
	return 1;
}

return 0;
}
