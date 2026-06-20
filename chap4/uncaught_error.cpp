#include <iostream>

void error(){
throw std::runtime_error("error message");
return ;

}

int main(){
std::cerr << "about to call error function\n";
error();

return 0;
}
