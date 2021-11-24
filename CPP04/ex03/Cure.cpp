#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Default destructor called" << std::endl;
}
AMateria*	Cure::clone() const
{
	AMateria *ptr = new Cure(*this);
	return (ptr);
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* beals " << target.getName() << "'s wounds *" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Cure const &src)
{
	out << "Cure->" << &src;
	return (out);
}
