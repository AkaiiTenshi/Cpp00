#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact_Class.hpp"
#include <string>
#include <cstdlib>
#include <iostream>

class Phonebook {
	private:
		Contact Contact[8];
		int	index;

	public:
		Phonebook();
		~Phonebook();
		void SearchFoo();
		void AddFoo();
};

#endif
