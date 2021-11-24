#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		Character(void);
		std::string	_name;
		AMateria*	_inventory[4];

	public:
		Character(Character const & src);
		Character(std::string name);
		Character	&operator=(Character const &rhs);
		virtual ~Character(void);

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

std::ostream& operator<<(std::ostream &out, Character const &src);

#endif
