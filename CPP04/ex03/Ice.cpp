#include "Ice.hpp"

Ice::Ice(void) : _type("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice const &src)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;
}

Ice Ice::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (rhs);
}

Ice::~Ice(void)
{
	std::cout << "Ice Default destructor called" << std::endl;
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << '* shoots ab ice bolt as ' << target.getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Ice const &src)
{
	out << "Ice->" << &src;
	return (out);
}
