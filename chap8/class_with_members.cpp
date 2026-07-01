#include <iostream>

class X {
	public:
		int m;			//data member
		int mf(int v){		//function member
			int old = m;
			m=v;
			return old;
		}
};

int main(){

X var;		//instantiation var of type X ("allocate the memory")
var.m = 7;	//initialization m of v with 7 ("set the value")
int y = var.mf(8);	//call var's instance of mf

std::cout << y << "\n";

return 0;
}
