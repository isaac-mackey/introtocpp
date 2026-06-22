#include <iostream>
#include <vector>
#include <string>

void pass_by_const_reference(const std::vector<std::string>& library){
std::cout << "\n\nInside pass_by_const_reference\n";
std::cout << "library address: " << (&library) << "\n";

for (const std::string& title : library){
	std::cout << "addr: " << &title << "\n";
	std::cout << "Title: " << title << "\n";
}
return;
}

void pass_by_value(std::vector<std::string> library){
std::cout << "\n\nInside pass_by_value\n";
std::cout << "library address: " << (&library) << "\n";

for (const std::string& title : library){
	std::cout << "addr: " << &title << "\n";
	std::cout << "Title: " << title << "\n";
}
return;
}

int main(){

std::vector<std::string> books;
std::cout << "books address: " << (&books) << "\n\n";

books.push_back("The Count of Monte Cristo");
books.push_back("Gulliver's Travels");
books.push_back("A Tale of Two Cities");

for (const std::string& title : books){
	std::cout << "addr: " << &title << "\n";
	std::cout << "Title: " << title << "\n";
}

pass_by_const_reference(books);
std::cout << "\n";
pass_by_value(books);

return 0;
}
