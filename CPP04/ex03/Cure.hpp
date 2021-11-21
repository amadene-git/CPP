#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
        Cure operator=(AMateria const &rhs);
		~Cure(void);


		AMateria* clone() const;
		void use(ICharacter& target);
};

std::ostream& operator<<(std::ostream &out, Cure const &src);

#endif
