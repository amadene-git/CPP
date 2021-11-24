#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class	Bureaucrat
{
    private:
        std::string _name;
        int         _grade;

	public:
		Bureaucrat(void);
        Bureaucrat(std::string const &name);
        Bureaucrat(std::string const &name, int const &grade);
       	Bureaucrat(int const & grade, std::string const & name);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);

        std::string const   &getName() const;
        int         const   &getGrade() const;
        void                incGrade();
        void                decGrade();

		class GradeTooHighException : public std::exception{
			public :
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char * what() const throw();
		};

        void                catchGradeException();
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &src);

#endif