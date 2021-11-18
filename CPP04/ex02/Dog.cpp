#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called ->" << this << std::endl;
	this->setType("Dog");
	this->_cerveau = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog Default destructor called ->" << this << std::endl;
	delete this->_cerveau;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called ->" << this << std::endl;
	this->_cerveau = new Brain();
	*this = src;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}

Brain	&Dog::getBrain(void) const
{
	return (*this->_cerveau);
}

Dog			&Dog::operator=(Dog const &rhs)
{
	*this->_cerveau = rhs.getBrain();
	return (*this);
}