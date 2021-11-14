#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default constructor called ->" << this << std::endl;
	this->setType("WrongAnimal");
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Default destructor called ->" << this << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Copy constructor called ->" << this << std::endl;
	*this = src;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}

void			WrongAnimal::setType(std::string name)
{
	this->type = name;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << "WROOOOOOOOOONG !!! (oui c'est censé représenter les cris de tout les Wrong-animaux...)" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, WrongAnimal const &src)
{
	out << "The " << src.getType() << " says:";
	src.makeSound();
	return (out);
}

