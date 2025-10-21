#include "Contact_Class.hpp"
#include "Phonebook_Class.hpp"

int main(){
	std::string Line;
	while (1)
	{
		std::getline(std::cin, Line);
		if (Line == "SEARCH")
			printphonebook;
		else if (Line == "ADD")
			add;
		else if (Line == "EXIT")
			return 0;
	}
}
