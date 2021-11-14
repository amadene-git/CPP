#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default constructor called ->" << this << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Default destructor called ->" << this << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat Copy constructor called ->" << this << std::endl;
	*this = src;
}

void			WrongCat::makeSound(void) const
{
	std::cout << "Biaou Biaou" << std::endl;
}