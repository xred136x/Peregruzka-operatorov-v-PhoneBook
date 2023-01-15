#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	_index = 0;
}

PhoneBook::~PhoneBook() {
	delete[] _name;
	delete[] _num;
}
void PhoneBook::AddAbonent(std::string& name, std::string& num)
{
	std::string* tmpName = new std::string[_index + 1];
	std::string* tmpNum = new std::string[_index + 1];
	for (size_t i = 0; i < _index; i++) {
		tmpName[i] = _name[i];
		tmpNum[i] = _num[i];
	}
	tmpName[_index] = name;
	tmpNum[_index] = num;
	delete[] _name;
	delete[] _num;
	_name = tmpName;
	_num = tmpNum;
	_index++;
}
const int PhoneBook::getLen() const
{
	return _index;
}
std::string PhoneBook::getNum(int index)
{
	return _num[index];
}
std::string PhoneBook::getName(int index)
{
	return _name[index];
}
bool PhoneBook::operator>(PhoneBook& other)
{
	if(this->_name->size() > other._name->size())
	return true;
}
bool PhoneBook::operator<(PhoneBook& other)
{
	return this->_name->size() < other._name->size();
}
bool PhoneBook::operator>=(PhoneBook& other)
{
	return _name->size() >= other._name->size();
}
bool PhoneBook::operator<=(PhoneBook& other)
{
	return _name->size() <= other._name->size();
}
const std::string& PhoneBook::operator[](int index) {
	return _name[index];
}
