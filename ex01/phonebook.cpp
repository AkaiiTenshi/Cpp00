#include "Phonebook_Class.hpp"

Phonebook::Phonebook(){

}

Phonebook::~Phonebook(){

}

void PrintFoo(std::string Text, bool nl){
	if (nl == true)
		std::cout << std::setw(10) << Text << "|" <<std::endl;
	else
		std::cout << std::setw(10) << Text << "|";
}

void Phonebook::SearchFoo(){
	PrintFoo("Index", false);
	PrintFoo("First Name", false);
	PrintFoo("Last Name", false);
	PrintFoo("Nickname", true);
	for (int j = 1; j <= index; j++)
	{
		PrintFoo(index, false);
		PrintFoo(this->Contact[index].getFirstName(), false);
	}
		

}

void Phonebook::AddFoo(){

}
