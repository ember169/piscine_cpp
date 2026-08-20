#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
    public:
        Weapon(const std::string type);
        ~Weapon();

        void getType(const std::string type);
        void setType(const std::string type);
    
        
    private:
        std::string _type;
};

#endif