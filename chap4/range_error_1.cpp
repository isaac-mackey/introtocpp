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
	throw std::out_of_range("out of range");
	}	
}
}
catch (std::out_of_range) {
	std::cerr << "Oops! Out of range\n";
	return 1;
}

return 0;
}
