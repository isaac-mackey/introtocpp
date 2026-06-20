#include <iostream>

int main() {

std::string previous;
std::string current;

std::cout << "previous: " << previous << "\n";
std::cout << "current: " << current << "\n";

std::cout << "previous =? current: " << (previous == current) << "\n";

while (std::cin >> current) {
	if (previous == current)
		std::cout << "repeated word: " << current << "\n";
	previous = current;
	}
return 0;
}
