#include <iostream>

class X {
public:
//interface to users (accessible by all)
//functions, types, and data
int m;

int f(int z){
p = 10;
return z+1;
};

int h(int z){
return g(10);
};

private:
//implementation details (only used by members of the class)
//functions, types, and data

int p;

int g(int z){
return p+z;
};
};

int main(){

X var;
var.m = 10;

std::cout << var.m << "\n"; //retrieve value of m
std::cout << var.h(20) << "\n"; //use public function, private value p not set yet, undefined behavior
std::cout << var.f(10) << "\n"; //use public function, private value p is set to be 10
std::cout << var.h(20) << "\n"; //use public function, calls private function

return 0;
}
