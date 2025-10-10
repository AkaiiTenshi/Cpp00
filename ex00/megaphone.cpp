#include <cctype>
#include <iostream>

using namespace std;

int main(int ac, char **av){
    char c = av[1][1];
    if (ac > 1)
    {
        std::cout << c << std::endl;
       c = toupper(c);
        std::cout << c << std::endl;
    }
    std::cout << "Test" << std::endl;
    return 0;
}
