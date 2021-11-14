#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor called ->" << this << std::endl;
	this->setType("Cat");
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called ->" << this << std::endl;
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
