#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main(int ac, char **av) {
	std::string str;
	if (ac>1){
		for(int i = 1; av[i]; i++){
			str.append(av[i]);
			str.append(" ");
		}

		std::transform(str.begin(), str.end(), str.begin(), ::toupper);

		std::cout <<  str << std::endl;
	} 
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
    return 0;
}
