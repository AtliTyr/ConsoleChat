#pragma once
#include "User.h"

class UserBase
{
private:
	User* list = nullptr;
	int UserCount{0};
public:
	UserBase();
	~UserBase();
	User& operator[](int index);

	// ��������� ������������ � ����
	void addUserToUserBase(const User& user);

	// ������� ������������ �� ����
	void deleteUserFromUserBase(std::string login);
	
	// ����� ������� � ��� �������������
	void displayUserBase();

	// ���������� ������ ������������ � ���� ������ ���� ������� �������
	// � ���������� -1 ���� ������������ �� ������
	int findUserIndex(std::string login); 
	
	// ������� ����� � ������ ������������ �� ���� , � ���� ������������ �
	// ������ ������� � ������ ����������, �� ���������� true
	// ����� false
	bool authorization(std::string login, std::string password);

};
