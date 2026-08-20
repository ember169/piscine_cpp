#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " was destroyed." << std::endl;
	return ;
}

void Zombie::sayBrainz(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setName(const std::string &name)
{
	this->_name = name;
	return ;
}

