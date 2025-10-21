#include "Contact_Class.hpp"

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

std::string Contact::getLastN(std::string String) const {
	return (_LastName);
}

std::string Contact::getFirstN(std::string String) const {
	return (_FirstName);
}

std::string Contact::getNickname(std::string String) const {
	return (_Nickname);
}

std::string Contact::getPhoneNu(std::string String) const {
	return (_PhoneNumber);
}

std::string Contact::getSecret(std::string String) const {
	return (_DarkestSecret);
}
