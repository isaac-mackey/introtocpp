#include <iostream>

int f(int x){
	x = x+1;
	return x;
}

int g(const int& y){
	
	std::cout << "(inside g: " << y << ") ";

	// this is now allowed
	// yields error: cannot assign to ... const-qualified type
	//y = y+1;

	return y;
}

int h(int& z){
	z = z+1;
	return z;
}

int main(){
int y = 0;
std::cout << "f(y): " << f(y) << "\n";
std::cout << "after f: y: " << y << "\n";

std::cout << "g(y): " << g(y) << "\n";
std::cout << "after g: y: " << y << "\n";

int k = 0;
std::cout << "h(k): " << h(k) << "\n";
std::cout << "after h: k: " << k << "\n";

return 0;
}
