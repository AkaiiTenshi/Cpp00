#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <cstdlib>
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

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
        void FormatPrint(std::string field) const ;
};

#endif
