#include "A_Animal.hpp"

A_Animal::A_Animal(void)
{
	std::cout << "A_Animal Default constructor called ->" << this << std::endl;
	this->setType("A_Animal");
}

A_Animal::~A_Animal(void)
{
	std::cout << "A_Animal Default destructor called ->" << this << std::endl;
}

A_Animal::A_Animal(A_Animal const &src)
{
	std::cout << "A_Animal Copy constructor called ->" << this << std::endl;
	*this = src;
}

std::string		A_Animal::getType(void) const
{
	return (this->type);
}

void			A_Animal::setType(std::string name)
{
	this->type = name;
}

A_Animal			&A_Animal::operator=(A_Animal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, A_Animal const &src)
{
	out << &src << " -> " << src.getType() << " says:";
	src.makeSound();
	return (out);
}
