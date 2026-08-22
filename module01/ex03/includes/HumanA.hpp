#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();

        void                attack() const;

    private:
        const std::string   _name;
        Weapon              _weapon;
};

#endif