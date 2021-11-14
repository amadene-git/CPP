#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public virtual Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		void	makeSound(void) const;

		Brain	*getBrain(void);

	private:
		Brain	*_vocer;
};

#endif
