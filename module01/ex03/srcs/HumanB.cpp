#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

HumanB::HumanB(const std::string &name): _name(name)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void HumanB::setWeapon(Weapon *weapon) 
{
    _weapon = weapon;
}

void HumanB::attack() const
{
    if (this->_weapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon" << std::endl;
}

const std::string &HumanB::getName()
{
    return (this->_name);
}

const Weapon &HumanB::getWeapon()
{
    return (this->_weapon);
}
