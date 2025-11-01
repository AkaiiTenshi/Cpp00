#include "Contact_Class.hpp"

Contact::Contact(){

}
Contact::Contact(std::string FirstName,
		std::string LastName,
		std::string PhoneNumber,
		std::string Nickname,
		std::string Secret): _FirstName(FirstName),
							 _LastName(LastName),
							 _PhoneNumber(PhoneNumber),
							 _Nickname(Nickname),
							 _DarkestSecret(Secret)
{

}

Contact::~Contact()
{

}

void Contact::printContact() const {
	std::cout << "First Name: " << this->getFirstN() <<std::endl;
	std::cout << "Last Name: " << this->getLastN() <<std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNu() << std::endl;
	std::cout << "Darkest Secret: " << this->getSecret() << std::endl;
}

void Contact::FormatPrint(std::string field) const {

    if (field.length() > 10)
        field = field.substr(0, 9) + ".";
    std::cout << YELLOW << std::setw(10) << field << "|" << RESET;
}
void Contact::printTab() const {
    FormatPrint(getFirstN());
    FormatPrint(getLastN());
    FormatPrint(getNickname());
    std::cout << std::endl;
}

std::string Contact::getLastN() const {
	return (_LastName);
}

std::string Contact::getFirstN() const {
	return (_FirstName);
}

std::string Contact::getNickname() const {
	return (_Nickname);
}

std::string Contact::getPhoneNu() const {
	return (_PhoneNumber);
}

std::string Contact::getSecret() const {
	return (_DarkestSecret);
}
