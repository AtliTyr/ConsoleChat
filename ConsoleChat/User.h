#pragma once
#include <string>
using namespace std;

class User
{
private:
	string _name;
	string _login;
	string _password;
	
public:
	User();
	User(string name, string password, string login);
	User(const User& user);
	User& operator=(const User& user);
	
	~User();
	void setName(string name); // Задать имя
	string getName() const; // Получить имя
	void setPassword(string password); // Задать пароль
	string getPassword() const; // Получить пароль
	void setLogin(string login); // Задать логин
	string getLogin() const; // Получить логин
	void setUserData(); // Задать логин, пароль, имя
	friend ostream& operator<< (ostream& os, const User& user); // Вывод логина и имени
};