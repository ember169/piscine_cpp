#include "../includes/Weapon.hpp"

Weapon::Weapon(const std::string &type): _type(type)
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

const std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(const std::string &type)
{
    this->_type = type;
}
