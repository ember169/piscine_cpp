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

		void 	sayBrainz();
		void 	setName(const std::string &name);

	private:
		std::string _name;
};

#endif