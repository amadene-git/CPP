#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called ->" << this << std::endl;
	this->setType("Dog");
	this->_vocer = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog Default destructor called ->" << this << std::endl;
	delete this->_vocer;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called ->" << this << std::endl;
	*this = src;
}

Brain	*Dog::getBrain(void)
{
	return (this->_vocer);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}
