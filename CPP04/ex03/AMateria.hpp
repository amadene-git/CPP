#ifndef AMATERIA_HPP
# define AMATEIRA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp" 

class	AMateria
{
	protected:
		std::string _type;
	
	public:
		AMateria(void);
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		~AMateria(void);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

std::ostream& operator<<(std::ostream &out, AMateria const &src);

#endif
