#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon): _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void HumanA::attack()
{
    return ;
}

const std::string &HumanA::getName()
{
    return (this->_name);
}

const Weapon &HumanA::getWeapon()
{
    return (this->_weapon);
}
