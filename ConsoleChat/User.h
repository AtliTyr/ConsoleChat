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
	void setName(string name); // ������ ���
	string getName() const; // �������� ���
	void setPassword(string password); // ������ ������
	string getPassword() const; // �������� ������
	void setLogin(string login); // ������ �����
	string getLogin() const; // �������� �����
	void setUserData(); // ������ �����, ������, ���
	friend ostream& operator<< (ostream& os, const User& user); // ����� ������ � �����
};