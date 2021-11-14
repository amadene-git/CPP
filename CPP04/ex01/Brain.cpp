#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called ->" << this << std::endl;
	int i = -1;
	while (++i < 100)
		this->_ideas[i] = "ideas-" + std::to_string(i);
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
	return (this->_ideas[i]);
}

void			Brain::setTheIdea(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

std::ostream	&operator<<(std::ostream &out, Brain const &src)
{
	int i = -1;
	while (++i < 100)
		out << i << ": " << src.getTheIdea(i) << std::endl;
	return (out);
}

