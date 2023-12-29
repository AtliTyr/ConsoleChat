#include "UserBase.h"
#include <iostream>
#include "User.h"

UserBase::UserBase() = default;
UserBase::~UserBase()
{
	delete[] list;

	list = nullptr;
}
User& UserBase::operator[](int index)
{
	if (index >= 0 && index <= UserCount)
		return (list[index]);
}

void UserBase::addUserToUserBase(const User& user)
{
		User* temp = list;
		list = nullptr;
		list = new User[++UserCount];
		
		for (int i = 0; i < UserCount - 1; i++)
		{
			list[i] = temp[i];
		}

		list[UserCount-1] = user;

		delete[] temp;
}
void UserBase::deleteUserFromUserBase(std::string login)
{
	int index = findUserIndex(login);

	User* temp = list;
	list = new User[--UserCount];
	for (int i = 0; i < index; i++)
	{
		list[i] = temp[i];
	}
	for (int i = index+1; i <= UserCount; i++)
	{
		list[i-1] = temp[i];
	}

	delete[] temp;
}
void UserBase::displayUserBase()
{
	for (int i = 0; i < UserCount; i++)
	{
		std::cout << list[i] << std::endl;
	}
}
int UserBase::findUserIndex(std::string login)
{
	for (int i = 0; i < UserCount; i++)
	{
		if (list[i].getLogin() == login)
			return i;
	}
	return -1;
}
bool UserBase::authorization(std::string login, std::string password)
{
	int index = findUserIndex(login);
	if (index != -1)
	{
		if (list[index].getPassword() == password)
		{
			return true;
		}
	}

	return false;

}