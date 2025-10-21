#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>


class Contact{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _PhoneNumber;
		std::string _Nickname;
		std::string _DarkestSecret;
	
	public:
		Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname, std::string Secret);
		~Contact();
		std::string getLastN(std::string String) const ;
		std::string getFirstN(std::string String) const ;
		std::string getNickname(std::string String) const ;
		std::string getPhoneNu(std::string String) const ;
		std::string getSecret(std::string String) const ;
};

#endif
