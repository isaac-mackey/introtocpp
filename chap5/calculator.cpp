#include <iostream>
#include <vector>
#include <random>

// calculator program from stroustrup's textbook

// testcases
// 1. 4+4 
// 2. 5-6*20
// 3. 8*4+4-3
// 4. 5/0
// 5. 4 + 4

// expr, op
class Token {
	public:
		char kind;
		double value;
		Token(char k) :kind{k}, value{0.0} {}
		Token(char k, double v) :kind{k}, value{v} {}
};

double expression() {
	double left = term();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
			case '+':
				left += term();
				t = get_token();
				break;
			case '-':
				left -= term();
				t = get_token();
				break;
			default:
				return left;
		}
	}
}

double term() {
	double left = primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
			case '+':
				left *= primary();
				t = get_token();
				break;
			case '/';
			{	double d = primary();
				if (d==0)
					error("divide by zero");
				left /= d;
				t = get_token();
				break;
			}
			default:
				return left;
		}
	}	
}

double primary(){

Token t = get_token();
switch (t.kind) {
	case '(':
	{	double d = expression();
		t = get_token();
		if (t.kind != ')'){
			error("')' expected");
		 }
		case '8':
			return t.value;
		default:
			error("primary expected");
	}
}

int main()





int main_2() {

std::string s;
std::vector<std::string> inputs;
inputs.push_back("444+2+33");
inputs.push_back("33-29");
inputs.push_back("44+(5+90)");

// std::cin >> s;

for(int j = 0; j < inputs.size(); j++){

std::vector<std::string> input_char_label;
s = inputs[j];

for(int i = 0; i < s.size(); i++){

	char c = s[i];
	std::cout << "c: " << c << "\n";
	if (c=='+' || c=='-' || c =='*'){
		input_char_label.push_back("o");
		std::cout << "Pushing o: " << c << "\n";
		}
	else if ('0' <= c && c <= '9') {
		input_char_label.push_back("n");
		std::cout << "Pushing n: " << c << "\n";		
	} else if (c == '(' || c == ')') {
		input_char_label.push_back("p");
		std::cout << "Pushing paren :" << c << "\n"; 
	} else {
		std::cout << "char " << c << " not recognized" << "\n";
	}
}

std::cout << "input_char_label, total: " << input_char_label.size() << "\n";
for (int i = 0; i < input_char_label.size(); i++) {
	std::cout << s[i] << ": " << input_char_label[i] << "\n";
}

std::vector<int> values;





}

return 0;
}
