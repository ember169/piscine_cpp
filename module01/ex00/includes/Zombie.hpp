#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iomanip>
# include <ostream>
# include <iostream>
# include <cstdlib>

class Zombie{
	public:
		Zombie();
		~Zombie();

		void sayBrainz();
		void setName(std::string &name);

	private:
		std::string _name;
};

Zombie *newZombie(std::string &name);
void randomChump(std::string name);

#endif