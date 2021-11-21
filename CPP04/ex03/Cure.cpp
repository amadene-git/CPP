#include "Cure.hpp"

Cure::Cure(void) : _type("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure const &src)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
}

Cure	Cure::operator=(AMateria const &rhs);
{
	if (this != rhs)
		*this = rhs;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Default destructor called" << std::endl;
}
Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << '* beals ' << target.getName() << "'s wounds *"std::endl;
}

std::ostream	&operator<<(std::ostream &out, Cure const &src)
{
	out << "Cure->" << &src;
	return (out);
}
