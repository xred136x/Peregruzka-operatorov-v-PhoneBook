#include"PhoneBook.h"


int main() {
	PhoneBook book1;
	std::string name = "Bob Smith";
	std::string num = "343 504 12 23";
	book1.AddAbonent(name, num);
	std::string name1 = "Sean Stone";
	std::string num1 = "343 345 78 23";
	book1.AddAbonent(name1, num1);
	std::string name2 = "Nick Cook";
	std::string num2 = "343 367 90 12";
	book1.AddAbonent(name2, num2);
	std::cout << "Name: " << book1.getName(2) << "\nNumber: " << book1.getNum(2) << '\n';
	PhoneBook book2;
	std::string name3 = "Bob Smith";
	std::string num3 = "343 504 12 23";
	book1.AddAbonent(name3, num3);
	bool res = book1 > book2;
	std::cout << '\n' << res;
	return 0;
}