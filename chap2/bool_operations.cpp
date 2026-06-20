#include <iostream>

int print_bool(std::string name, bool b){

std::cout << name << ": " << b << "\n";

return 0;
}

int main() {

// bool tests
bool p = true;
bool q = false;

print_bool("p",p);
print_bool("q",q);

// read from p into r
bool r;
p >> r;
print_bool("r",r);

// write q into s
bool s;
s << q;
print_bool("s",s);

// equals
bool equals = p == q;
print_bool("equals",equals);

// not equals
bool not_equals = true != false;
print_bool("not_equals",not_equals);

// greater than
bool greater_than = true > false;
print_bool("greater_than",greater_than);

// greater than or equal to
bool geq = true >= true;
print_bool("geq",geq);

return 0;
}
