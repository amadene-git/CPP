#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character Default constructor called -> " << this << std::endl;
}

Character::Character(Character const &src)
{
	std::cout << "Character Copy constructor called -> " << this << std::endl;

	*this = src;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Sring Constructor called \"" << _name << "\" ->" << this << std::endl;

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character		&Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

Character::~Character(void)
{
	std::cout << "Character Default destructor called -> " << this << std::endl;

	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

void			Character::equip(AMateria* m)
{
	int i = 0;

	if (this->_inventory[3])
		return;
	while (this->_inventory[i] && i < 4)
		i++;
	if (i < 4)
		this->_inventory[i] = m;
}
void			Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = NULL;
		}
	}

}

void			Character::use(int idx, ICharacter& target)
{
	
	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
	}
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &out, Character const &src)
{
	out << "Character->" << &src;
	return (out);
}
