
# include <string>
# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memory address of the string    : " << &str << std::endl;
    std::cout << "memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "value of the string variable    : " << str << std::endl;
    std::cout << "value pointed to by stringPTR   : " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF   : " << stringREF << std::endl;

    // Learnings:
    //      - pointer holds the address it points to directly, not the value of it
    //      - reference is the opposite, thus making an alias of the variable
}