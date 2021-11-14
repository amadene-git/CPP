#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Default constructor called ->" << this << std::endl;
	this->setType("Animal");
}

Animal::~Animal(void)
{
	std::cout << "Animal Default destructor called ->" << this << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy constructor called ->" << this << std::endl;
	*this = src;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}

void			Animal::setType(std::string name)
{
	this->type = name;
}

void			Animal::makeSound(void) const
{
	std::cout << "TCFJNDCIUSFCVDSBCUFGSCDSCBDSI !!! (oui c'est censé représenter les cris de tous les animaux...)" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Animal const &src)
{
	out << "The " << src.getType() << " says:";
	src.makeSound();
	return (out);
}
