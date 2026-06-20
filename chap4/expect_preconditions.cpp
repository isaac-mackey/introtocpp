#include <iostream>

bool ordered_precondition(int a, int b, int c){
return (0 < a) && (a < b) && (b < c); 
}

int complicated_function(int a, int b, int c){

	// expect(ordered_precondition(a,b,c), "bad arguments for complicated function");
	return a + b + c;

}

int main(){

std::cout << "First time: " << complicated_function(1,2,3) << "\n";

std::cout << "Second time: " << complicated_function(-1,2,3) << "\n";

std::cout << "Third time: " << complicated_function(1,20,3) << "\n";

return 0;
}
