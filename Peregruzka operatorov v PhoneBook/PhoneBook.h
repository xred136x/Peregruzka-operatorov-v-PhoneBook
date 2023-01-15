#pragma once
#include<cstring>
#include<iostream>

class PhoneBook
{
	int _index;
	std::string* _num;
	std::string* _name;
public:
	PhoneBook();
	~PhoneBook();
	void AddAbonent(std::string& name, std::string& num);
	const int getLen() const;
	std::string getNum(int index);
	std::string getName(int index);
	bool operator>(PhoneBook& other);
	bool operator<(PhoneBook& other);
	bool operator>=(PhoneBook& other);
	bool operator<=(PhoneBook& other);
	const std::string& operator[](int index);
};

