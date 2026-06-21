#include <iostream>
#include <random>

int main(){

std::default_random_engine engine;

int bottom = 1;
int top = 6;
std::uniform_int_distribution<int> die_dist(bottom,top);

std::uniform_int_distribution<int> alphabet_dist('a','z');

for (int i=0; i < 10; i++)
	std::cout << "Random " << bottom << " to " << top << " #" << i << ": "<< die_dist(engine) << "\n";

for (int i=0; i < 10; i++) {
	std::string s(20, 'x');
	for (char& ch : s) {
		char c = alphabet_dist(engine);
		ch = c;
	}
	std::cout << "Random string #" << i << ": "<< s << "\n";
	
}

return 0;





}
