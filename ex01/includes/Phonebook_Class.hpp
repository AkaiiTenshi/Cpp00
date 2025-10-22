#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact_Class.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

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

#endif
