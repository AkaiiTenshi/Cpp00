#include "Phonebook_Class.hpp"

int main(){
	Phonebook phonebook;
	std::string Line;
	while (1)
	{
		std::getline(std::cin, Line);
		if (Line == "SEARCH")
			phonebook.SearchFoo();
		else if (Line == "ADD")
			phonebook.AddFoo();
		else if (Line == "EXIT")
			return 0;
	}
}
