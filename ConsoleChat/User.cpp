#include "User.h"
#include <iostream>

using namespace std;

User::User() = default;
User::~User() = default;

User::User(std::string name, std::string password, std::string login): _name(name), _password(password), _login(login)
{}
User::User(const User& user)
{
	this->_login = user._login;
	this->_name = user._name;
	this->_password = user._password;
}
User& User::operator=(const User& user)
{
	this->_login = user._login;
	this->_name = user._name;
	this->_password = user._password;
	return *this;
}

void User::setName(std::string name)
{
	_name = name;
}
std::string User::getName() const
{
	return _name;
}
void User::setLogin(std::string login)
{
	_login = login;
}
std::string User::getLogin() const
{
	return _login;
}
void User::setPassword(std::string password)
{
	_password = password;
}
std::string User::getPassword() const
{
	return _password;
}
void User::setUserData()
{
	std::string a;
	std::cout << "������� ���: ";
	std::cin >> a;
	setName(a);
	std::cout << "������� login: ";
	std::cin >> a;
	setLogin(a);
	std::cout << "������� ������: ";
	std::cin >> a;
	setPassword(a);
}
std::ostream& operator<< (std::ostream& os, const User& user)
{
	return os << "���: " << user.getName() << endl
			  << "�����: " << user.getLogin() << endl;
}