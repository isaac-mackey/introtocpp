#include <iostream>

int f(int x){
return x+x;
}

int f(double d){
return d;
}

// NOT ALLOWED TO OVERLOAD f
// double f(double d){
// return 100+d;
// }

int main(){

int i = 7;

std::cout << f(i) << "\n";

double j = 10;

std::cout << f(j) << "\n";

}
