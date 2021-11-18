#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called ->" << this << std::endl;
	this->setType("Dog");
}

Dog::~Dog(void)
{
	std::cout << "Dog Default destructor called ->" << this << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called ->" << this << std::endl;
	*this = src;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}

Dog			&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}