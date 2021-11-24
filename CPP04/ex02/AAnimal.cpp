#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Default constructor called ->" << this << std::endl;
	this->setType("AAnimal");
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Default destructor called ->" << this << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal Copy constructor called ->" << this << std::endl;
	*this = src;
}

std::string		AAnimal::getType(void) const
{
	return (this->type);
}

void			AAnimal::setType(std::string name)
{
	this->type = name;
}

AAnimal			&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, AAnimal const &src)
{
	out << &src << " -> " << src.getType() << " says:";
	src.makeSound();
	return (out);
}
