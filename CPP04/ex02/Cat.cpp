#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor called ->" << this << std::endl;
	this->setType("Cat");
	this->_cerveau = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called ->" << this << std::endl;
	delete this->_cerveau;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called ->" << this << std::endl;
	this->_cerveau = new Brain();
	*this = src;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}

Brain	&Cat::getBrain(void) const
{
	return (*this->_cerveau);
}

Cat			&Cat::operator=(Cat const &rhs)
{
	*this->_cerveau = rhs.getBrain();
	return (*this);
}