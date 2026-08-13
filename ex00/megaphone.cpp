#include <string>
#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac ; ++i)
        {
            std::string arg(av[i]);

            for (std::string::size_type j = 0; j < arg.length(); ++j)
                std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(arg[j])));
        }
        std::cout << std::endl;
    }
    return 0;
}
