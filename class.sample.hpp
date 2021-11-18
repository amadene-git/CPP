#ifndef CLASS_HPP
# define CLASS_HPP
# include <iostream>

class	__Class__
{
	public:
		__Class__(void);
		__Class__(__Class__ const & src);
		~__Class__(void);
		__Class__	&operator=(__Class__ const &rhs);

	private:
		int		_private;
};

std::ostream& operator<<(std::ostream &out, __Class__ const &src);

#endif
