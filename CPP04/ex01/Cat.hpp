#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		Cat	&operator=(Cat const &rhs);

		void	makeSound(void) const;
		Brain	&getBrain(void) const;

	private:
		Brain*	_cerveau;
};

#endif
