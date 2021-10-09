#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
	public:

		Zombie(void);
		~Zombie(void);
		
		void		announce(void);
		void		setter(std::string name);
		std::string	getter(void);
	
	private:
		std::string	_name;

};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

#endif
