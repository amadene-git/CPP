#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Default destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *ptr = new Ice(*this);
	return (ptr);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt as " << target.getName() << "*" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Ice const &src)
{
	out << "Ice->" << &src;
	return (out);
}
