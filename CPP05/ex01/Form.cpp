#include "Form.hpp"


Form::Form(void) : _name("default"), _is_signed(0), _grade_sign(150), _grade_exec(150)
{
    std::cout << "Form default constructor called ->" << this << std::endl;
}
Form::Form(std::string const name, int const grade_sign, int const grade_exec) : _name(name), _is_signed(0), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    std::cout << "Form name+gradesign+gradeexec constructor called ->" << this << std::endl;
    catchFormException();
}
Form::Form(Form const & src) : _name(src.getName()), _is_signed(src.getIsSigned()), _grade_sign(src.getGradeSign()), _grade_exec(src.getGradexec()) 
{
    std::cout << "Form copy constructor called ->" << this << std::endl;
    catchFormException();
}
Form	&Form::operator=(Form const &rhs)
{
    if (this != &rhs)
        this->_is_signed = rhs.getIsSigned();
    catchFormException();
    return (*this);
}
Form::~Form(void)
{
    std::cout << "Form default desstructor called ->" << this << std::endl;
}

std::string const   &Form::getName() const
{
    return (this->_name);
}
bool        const   &Form::getIsSigned() const
{
    return (this->_is_signed);
}
int         const   &Form::getGradeSign() const
{
    return (this->_grade_sign);
}
int         const   &Form::getGradexec() const
{
    return (this->_grade_exec);
}

void                Form::catchFormException()
{
    if (this->_grade_sign > 150)
		throw Form::GradeTooLowException();
	else if (this->_grade_sign < 1)
		throw Form::GradeTooHighException();
    else if (this->_grade_exec > 150)
		throw Form::GradeTooLowException();
	else if (this->_grade_exec < 1)
		throw Form::GradeTooHighException();
}

Form                &Form::beSigned(Bureaucrat const &bob)
{
    if (this->_grade_sign >= bob.getGrade())
        this->_is_signed = 1;
    else
        throw Form::GradeTooLowException();
    return (*this);
}
	
    
const char *	Form::GradeTooHighException::what() const throw()
{
	return ("FormException : grade too high");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("FormException : grade too low");
}

std::ostream	&operator<<(std::ostream &out, Form const &src)
{
    out << &src << " -> " << src.getName() << ", Form grade signed : " << src.getIsSigned() << std::endl;
    out << "Grade of signatory :" << src.getGradeSign() << ", Grade of executor :" << src.getGradexec();
	return (out);
}