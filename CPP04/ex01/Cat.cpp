#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor called ->" << this << std::endl;
	this->setType("Cat");
	this->_vocer = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called ->" << this << std::endl;
	delete this->_vocer;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called ->" << this << std::endl;
	*this = src;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou" << std::endl;
}
