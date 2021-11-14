#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		std::string			getTheIdea(int i) const;
		void				setTheIdea(int i, std::string idea);

	
	private:
		std::string	_ideas[100];

};

std::ostream& operator<<(std::ostream &out, Brain const &src);

#endif
