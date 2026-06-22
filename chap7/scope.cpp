#include <iostream>

int x = 1;

int f(int y){

std::cout << "inside f: x is " << x << "\n";

// local scope
{
int x = 5;
std::cout << "inside brackets: x is " << x << "\n";
}

std::cout << "outside brackets: x is " << x << "\n";

return x+2;
}

int main(){

int x = 2;

std::cout << "inside main: x is " << x << "\n";

int z = f(x);

return 0;
}
