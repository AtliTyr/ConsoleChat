# Команда
 Амир Кулибабаев

# Classes
**Class User** \
void setName(string name); \
string getName() const; \
void setPassword(string password); \
string getPassword() const; \
void setLogin(string login); \
string getLogin() const; \
void setUserData(); \
friend ostream& operator<< (ostream& os, const User& user); 

**Class Message** \
void senderOfMessage(string sender_l); \
void recipientOfMessage(string recipient_l); \
void setMessage(string message); \
string getSenderOfMessage(); \
string getRecepientOfMessage(); \
string getMessage(); 

**Class UserBase** \
void addUserToUserBase(const User& user); \
void deleteUserFromUserBase(std::string login); \
void displayUserBase(); \
int findUserIndex(std::string login); \
bool authorization(std::string login, std::string password);

**Class Chat** \
bool EnterChat(); \
void Registration(); \
void Registration(std::string name, std::string login, std::string password); //Ускоренный вариант регистрации для Дебагга	 \
void WriteMessageToAll(); \
void WritePrivateMessage(std::string login); \
void WriteTestMessages(); \
void CheckMessage(); \
void DeleteUserFromChat(); \
void DisplayUserList();	

# Exception Classes
**Class bad_Authorization: public std::exception** \
virtual const char* what() const noexcept override; \
**Class bad_Registration: public std::exception** \
virtual const char* what() const noexcept override; \
**Class bad_Recepient: public std::exception** \
virtual const char* what() const noexcept override; 

# Functions
void Menu1(); \
void Menu2(); \
std::string loginRequest(); \
void ChatMenu(); \
void MainMenu(); 

# Описание работы
**Описание работы**

![Описание работы](https://github.com/B1gFo0T/ConsoleChat/assets/48732012/55be90af-4dec-40a7-b90a-b024efe91757)

