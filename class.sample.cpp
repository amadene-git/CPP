#include "__Class__.hpp"

__Class__::__Class__(void)
{
	std::cout << "__Class__ Default constructor called -> " << this << std::endl;
}

__Class__::__Class__(__Class__ const &src)
{
	std::cout << "__Class__ Copy constructor called -> " << this << std::endl;
	*this = src;
}

__Class__		&__Class__::operator=(__Class__ const &rhs)
{
	if (*this != rhs)
		*this = rhs;
	return (*this);
}

__Class__::~__Class__(void)
{
	std::cout << "__Class__ Default destructor called -> " << this << std::endl;
}

std::ostream	&operator<<(std::ostream &out, __Class__ const &src)
{
	out << "__Class__->" << &src;
	return (out);
}
