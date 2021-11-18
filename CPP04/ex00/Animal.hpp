#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal	&operator=(Animal const &rhs);

	
		std::string	getType(void) const;
		void		setType(std::string name);

		virtual void		makeSound(void) const;

	protected:
		std::string	type;

};

std::ostream& operator<<(std::ostream &out, Animal const &src);

#endif
