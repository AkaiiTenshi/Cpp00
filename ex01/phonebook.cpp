#include "Phonebook_Class.hpp"

Phonebook::Phonebook(): index(0), nu_contacts(0) {

}

Phonebook::~Phonebook(){

}

void clearfoo(int x){
	std::cout << "\033[2J\033[H";
    std::cout << "                                                                      ░▀▀█░█░█░█▀▀░▀█▀░░░█▀█░░░█▀█░█░█░█▀█░█▀█░█▀▀░█▀▄░█▀█░█▀█░█░█\n";
    std::cout << "                                                                      ░░░█░█░█░▀▀█░░█░░░░█▀█░░░█▀▀░█▀█░█░█░█░█░█▀▀░█▀▄░█░█░█░█░█▀▄\n";
    std::cout << "                                                                      ░▀▀░░▀▀▀░▀▀▀░░▀░░░░▀░▀░░░▀░░░▀░▀░▀▀▀░▀░▀░▀▀▀░▀▀░░▀▀▀░▀▀▀░▀░▀\n";
    std::cout <<"                                                                                                                                                  By Salih SOYSAL aka AkaiiTenshi\n";
    std::cout << std::endl;
	if (x == 1)
		std::cout << GREEN << "--------------Helper_Main----------------" << "\n" << "ADD: Input a new contact." << "\n"
            << "SEARCH: Search through existing contacts.\n"
            << "EXIT: Exits the Phonebook.\n"
            << "----------------------------------------- " << RESET << std::endl;
	else if (x == 2){
		std::cout << GREEN <<"---------------Helper_ADD----------------" << "\n" << "You cannot input any empty information" << "\n"
            << "The phone number needs to be digits only.\n"
            << "You will go back to the main page after you're done.\n"
            << "----------------------------------------- " << RESET << std::endl;
    }
    else if (x == 3){
		std::cout << GREEN << "-------------Helper_SEARCH---------------" << "\n" << "You need to input a valid contact index" << "\n"
            << "BACK will take you back to the main page.\n"
            << "----------------------------------------- " << RESET << std::endl;

    }
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
	clearfoo(3);
	for (int i = 0; i < 4; i++)
		std::cout << YELLOW << std::setw(10) << array[i] << "|" << RESET;
	std::cout << std::endl;
	for (int j = 1; j <= nu_contacts; j++)
	{
		std::cout << YELLOW << std::setw(10) << j << "|";
		this->contact[j-1].printTab();
	}
	while (Line != "BACK"){
        std::cout << CYAN <<"Input for SEARCH: " << RESET;
		std::getline(std::cin, Line);
		int choice = StringToInt(Line);
		if(choice == -1)
			std::cout << "Please give a proper input" << std::endl;
		else if (choice >= 1 && choice <= index)
		{
			this->contact[choice - 1].printContact();
		}
		else
			std::cout << "Please select an existing contact" << std::endl;
	}

}

bool NumberCheck(std::string number){
    for (size_t i = 0; i < number.length(); i++){
        if (number[i] < '0' || number[i] > '9')
            return (false);
    }
    return (true);
}

void Phonebook::AddFoo(){
	std::string fname;
	std::string lname;
	std::string phone;
	std::string secret;
	std::string nickname;

	if (this->index == 8)
		this->index = 0;
	do {
		clearfoo(2);
		std::cout << "First Name: " << std::endl;
		std::getline(std::cin,fname);
	} while (fname.empty());
	do {
		clearfoo(2);
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin,lname);
	}while (lname.empty());
	do {
		clearfoo(2);
	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin,nickname);
	} while (nickname.empty());
	do{
		clearfoo(2);
	std::cout << "Phone Number: " << std::endl;
	std::getline(std::cin,phone);
	} while (phone.empty() || NumberCheck(phone) == false);
	do {
		clearfoo(2);
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin,secret);
	} while (secret.empty());
	contact[index]= Contact(fname, lname, phone, nickname, secret);
	this->index++;
	if (this->nu_contacts != 8)
			nu_contacts++;
	clearfoo(2);
}
