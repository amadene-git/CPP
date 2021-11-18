#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	A_Animal
{
	public:
		A_Animal(void);
		A_Animal(A_Animal const & src);
		virtual ~A_Animal(void);
		A_Animal	&operator=(A_Animal const &rhs);

	
		std::string	getType(void) const;
		void		setType(std::string name);

		virtual void		makeSound(void) const = 0;

	protected:
		std::string	type;

};

std::ostream& operator<<(std::ostream &out, A_Animal const &src);

#endif
