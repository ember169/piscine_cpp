#include "../includes/Zombie.hpp"

Zombie *newZombie(std::string &name)
{
	new Zombie zombie = Zombie();
	
	zombie.setName(name);
	return (&zombie);
}