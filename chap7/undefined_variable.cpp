#include <iostream>

// Compiling with no optimization yields x=1, z=huge number, y=1

// Compiling with -O2 flag yields x=huge number, y=x+6, z=x+16


int main(){

int x;

std::cout << "x: " << x << "\n";

int z;

std::cout << "z: " << z << "\n";

std::cout << "x+z: " << (x+z) << "\n";

int y;

std::cout << "y: " << y << "\n";

}
