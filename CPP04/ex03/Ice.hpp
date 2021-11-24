#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & src);
        Ice	&operator=(Ice const &rhs);
		~Ice(void);


		AMateria* clone() const;
		void use(ICharacter& target);
};

std::ostream& operator<<(std::ostream &out, Ice const &src);

#endif
