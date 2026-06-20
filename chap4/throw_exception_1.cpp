#include <iostream>

class Bad_Area {};

int area(int length, int width, int height){

	if (length < 0){
	throw Bad_Area();
	}

	return length*width*height;

}

int main(){

try{
area(-2,3,4);
}
catch (Bad_Area) {
std::cout << "negative argument" << "\n";
}
return 0;
}
