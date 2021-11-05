#include "Class.sample.hpp"

__Class__::__Class__(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

__Class__::~__Class__(void)
{
	std::cout << "Default destructor called" << std::endl;
}

__Class__::__Class__(__Class__ const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

std::ostream	&operator<<(std::ostream &out, __Class__ const &src)
{
	out << "overload <<";
	return (out);
}
