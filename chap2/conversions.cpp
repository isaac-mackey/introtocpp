#include <iostream>

int main(){

int i = 0;
std::cout << "i: " << i << "\n";

char z = i;
std::cout << "z: " << z << "\n";

char c = 'a';
std::cout << "c: " << c << "\n";

int i1 = c;
std::cout << "i1: " << i1 << "\n";

int i2 = c+1000;
std::cout << "i2: " << i2 << "\n";

double d = i2 + 7.3;
std::cout << "d: " << d << "\n";

c = 'y';
std::cout << "c: " << c << "\n";

i1 = c;
std::cout << "i1: " << i1 << "\n";

i2 = c+1000;
std::cout << "i2: " << i2 << "\n";

d = i2 + 7.3;
std::cout << "d: " << d << "\n";

int num = 1;

while(num != 0) {
	std::string ch;
	std::cin >> num;
	ch = num;
	std::cout << "ch: " << ch << "\n";
}

std::cout << "Demonstrating narrowing\n";

double dd = 0;

while (std::cin >> dd){
	int ii = dd;
	char cc = ii;
	std::cout << "dd==" << dd << "\n";
	std::cout << "ii==" << ii << "\n";
	std::cout << "cc==" << cc << "\n";
	std::cout << "char(" << cc << ")\n";
}

return 0;

}
