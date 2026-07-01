#include <iostream>

struct struct_X {
int public_var;
};

class class_X {
public:
int public_var_2;

private:
int private_var;
};

int main(){

struct_X y;
class_X x;

y.public_var = 10;
x.public_var_2 = 20;

std::cout << y.public_var << "\n";
std::cout << x.public_var_2 << "\n";


return 0;
}
