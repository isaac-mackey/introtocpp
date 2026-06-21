#include <iostream>
#include <vector>

int square(int i){
return i*i;
}

int main(){

for(int i = 0; i < 10; i+=1){
	std::cout << i << ": " << square(i) << "\n";
}

std::vector<int> v;
v.push_back(5);
v.push_back(10);

std::cout << "v size: " << v.size() << "\n";

for(int value : v){
	std::cout << value << ": " << square(value) << "\n";
}

std::vector<std::string> names;

for(std::string name; std::cin >> name && name != "end";){
	names.push_back(name);
}

std::cout << "Total names: " << names.size() << "\n";

std::cout << "---Indexing over vector by index---\n";
for(int i = 0; i < names.size(); i++){
	std::cout << "name: " << names[i] << "\n";
}

std::cout << "---Iterator over vector by values---\n";
for(std::string n : names){
	std::cout << "name: " << n << "\n"; 
}

return 0;
}
