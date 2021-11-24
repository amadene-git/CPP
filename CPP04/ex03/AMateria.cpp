#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = src;

}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Default destructor called" << std::endl;
}

void			AMateria::use(ICharacter& target)
{
	std::cout << "Error: AMateria can't use use() on " << std::endl;
	std::cout << target.getName() << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

std::ostream	&operator<<(std::ostream &out, AMateria const &src)
{
	out << "AMateria ->" << &src;
	return (out);
}
