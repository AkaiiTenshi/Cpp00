#include "Phonebook_Class.hpp"

Phonebook::Phonebook(): index(0), nu_contacts(0) {

}

Phonebook::~Phonebook(){

}

void clearfoo(void){
	std::cout << "\033[2J\033[H";
}

int	StringToInt(const std::string choice)
{
	int res = 0;
	for (size_t i = 0; choice[i]; i++)
	{
		if (choice[i] < '1' || choice[i] > '8')
				return (-1);
		res = res * 10 + choice[i] - '0';
	}
	return (res);
}

void Phonebook::SearchFoo(){
	std::string Line;
	std::string array[4] = { "Index", "First name", "Last name", "Nickname"}; 
	clearfoo();
	for (int i = 0; i < 4; i++)
		std::cout << std::setw(10) << array[i] << "|";
	std::cout << std::endl;
	for (int j = 1; j <= nu_contacts; j++)
	{
		std::cout << std::setw(10) << j << "|";
		this->contact[j-1].printTab();
	}
	while (1){
		std::getline(std::cin, Line);
		int choice = StringToInt(Line);
		if(choice == -1)
			std::cout << "Please give a proper input" << std::endl;
		else if (choice >= 1 && choice <= index)
		{
			this->contact[choice - 1].printContact();
			return ;
		}
		else
			std::cout << "Please select an existing contact" << std::endl;
	}

}

void Phonebook::AddFoo(){
	std::string fname;
	std::string lname;
	std::string phone;
	std::string secret;
	std::string nickname;

	if (this->index == 8)
		this->index = 0;
	std::cout << "First Name: " << std::endl;
	std::getline(std::cin,fname);
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin,lname);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin,nickname);
	std::cout << "Phone Number: " << std::endl;
	std::getline(std::cin,phone);
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin,secret);
	contact[index]= Contact(fname, lname, phone, nickname, secret);	
	this->index++;
	if (this->nu_contacts != 8)
			nu_contacts++;
}
