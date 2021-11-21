#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called ->" << this << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "empty";
}

Brain::~Brain(void)
{
	std::cout << "Brain Default destructor called ->" << this << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor called ->" << this << std::endl;
	*this = src;
}

std::string		Brain::getTheIdea(int i) const
{
	if (i > 100 || i < 0)
		return (NULL);
	return (this->_ideas[i]);
}

void			Brain::setTheIdea(int i, std::string idea)
{
	if (i > 100 || i < 0)
		return;
	this->_ideas[i] = idea;
}

Brain		&Brain::operator=(Brain const &rhs)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getTheIdea(i);
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Brain const &src)
{
	int i = -1;
	while (++i < 100)
		out << i << ": " << src.getTheIdea(i) << std::endl;
	return (out);
}

