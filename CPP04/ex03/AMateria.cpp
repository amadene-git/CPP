#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Default destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = src;
}

std::string const & getType() const
{
	return (this->_tyoe);
}

std::ostream	&operator<<(std::ostream &out, AMateria const &src)
{
	out << "AMateria ->" << &src;
	return (out);
}
