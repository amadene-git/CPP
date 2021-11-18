#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "A_Animal.hpp"
# include "Brain.hpp"

class	Cat : public A_Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Cat	&operator=(Cat const &rhs);

		void	makeSound(void) const;
		Brain	&getBrain(void) const;

	private:
		Brain*	_cerveau;
};

#endif
