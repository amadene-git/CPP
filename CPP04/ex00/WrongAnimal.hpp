#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string	getType(void) const;
		void		setType(std::string name);

		void		makeSound(void) const;

	protected:
		std::string	type;

};

std::ostream& operator<<(std::ostream &out, WrongAnimal const &src);
#endif

