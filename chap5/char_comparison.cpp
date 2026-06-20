#include <iostream>

int main(){
	std::string s;
	std::cin >> s;
	s = "abc123";
	for (int i = 0; i < s.size(); i++){
		std::cout << "i: " << i << "\n";	
		std::cout << "s[i]: " << s[i] << "\n";
		char ch = s[i];	
		std::cout << "ch: " << ch << "\n";
		char one_char = '1';
		char nine_char = '9';
		std::cout << "one_char: " << one_char << "\n";
 		std::cout << "nine_char: " << nine_char << "\n";	
		std::cout << "eq: " << (one_char <= ch && ch <= nine_char) << "\n";
		std::cout << "\n\n";
	}

	

return 0;
}
