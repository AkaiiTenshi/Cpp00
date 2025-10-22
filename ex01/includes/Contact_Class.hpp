#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>


class Contact{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _PhoneNumber;
		std::string _Nickname;
		std::string _DarkestSecret;
	
	public:
		Contact();
		Contact(std::string FirstName, std::string LastName, std::string PhoneNumber, std::string Nickname, std::string Secret);
		~Contact();
		std::string getLastN() const ;
		std::string getFirstN() const ;
		std::string getNickname() const ;
		std::string getPhoneNu() const ;
		std::string getSecret() const ;
		void printTab() const;
		void printContact() const;
};

#endif
