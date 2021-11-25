#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>

class   Form;

# include "Bureaucrat.hpp"

class	Form
{
    private:
        std::string const   _name;
        bool                _is_signed;
        int         const   _grade_sign;
        int         const   _grade_exec;

	public:
		Form(void);
		Form(Form const & src);
		Form(std::string const name, int const grade_sign, int const grade_exec);
        Form	&operator=(Form const &rhs);
		virtual ~Form(void);

        std::string const   &getName() const;
        bool        const   &getIsSigned() const;
        int         const   &getGradeSign() const;
        int         const   &getGradexec() const;

        void        execute(Bureaucrat const & executor) const;
       
        virtual void        concret_exec(std::string target) const = 0;
        virtual std::string getTarget(void) const = 0;
        
        void                catchFormException();

        Form                &beSigned(Bureaucrat const &bob);
	
    
    class GradeTooHighException : public std::exception{
		public :
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public :
			virtual const char * what() const throw();
	};
    class FormIsNotSignedException : public std::exception{
		public :
			virtual const char * what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, Form const &src);

#endif
