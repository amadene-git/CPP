#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "A_Animal.hpp"
# include "Brain.hpp"

class	Dog : public A_Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Dog	&operator=(Dog const &rhs);

		void	makeSound(void) const;
		Brain	&getBrain(void) const;

	private:
		Brain*	_cerveau;
};

#endif
