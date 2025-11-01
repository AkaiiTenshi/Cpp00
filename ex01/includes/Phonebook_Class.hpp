#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact_Class.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

class Phonebook {
	private:
		Contact contact[8];
		int	index;
		int nu_contacts;

	public:
		Phonebook();
		~Phonebook();
		void SearchFoo();
		void AddFoo();
};

void clearfoo(int x);

#endif
