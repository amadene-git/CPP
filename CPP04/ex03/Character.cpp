#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character Default constructor called -> " << this << std::endl;
}

Character::Character(Character const &src)
{
	std::cout << "Character Copy constructor called -> " << this << std::endl;

	*this = src;
	for (int i = 0; i < 3; i++)
		if (this->_inventory[i])
			this->_inventory(i) = src._inventory[i]clone();
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Sring Constructor called \"" << _name << "\" ->" << this << std::endl;

	for (int i = 0; i < 3; i++)
		this->_inventory(i) = NULL;
}

Character		&Character::operator=(Character const &rhs)
{
	if (*this != rhs)
		*this = rhs;
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character Default destructor called -> " << this << std::endl;

	for(int i > 0; i < 3)
}

std::string const	&Character::getName(void)
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{


}
		void unequip(int idx);
		void use(int idx, ICharacter& target);

std::ostream	&operator<<(std::ostream &out, Character const &src)
{
	out << "Character->" << &src;
	return (out);
}
