#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called -> " << this << std::endl;
}
Bureaucrat::Bureaucrat(std::string const &name) : _name(name), _grade(150)
{
	std::cout << "Bureaucrat string constructor called -> " << this << std::endl;
}
Bureaucrat::Bureaucrat(std::string const &name, int const &grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat string + int constructor called -> " << this << std::endl;
    catchGradeException();
}
Bureaucrat::Bureaucrat(int const &grade, std::string const &name) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat int + string constructor called -> " << this << std::endl;
    catchGradeException();
}
Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Copy constructor called -> " << this << std::endl;
	*this = src;
    catchGradeException();
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	
	this->_grade = rhs.getGrade();
    catchGradeException();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Default destructor called -> " << this << std::endl;
}


std::string const   &Bureaucrat::getName() const
{
    return (this->_name);
}

int         const   &Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void                Bureaucrat::incGrade()
{
    this->_grade--;
    catchGradeException();
}

void                Bureaucrat::decGrade()
{
    this->_grade++;
    catchGradeException();
}

void                Bureaucrat::catchGradeException()
{
    if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}


const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception : grade too high");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception : grade too low");
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &src)
{
    out << &src << " -> " << src.getName() << ", bureaucrat grade " << src.getGrade();
	out << "Bureaucrat->" << &src << " Name :" << src.getName() << "; Grade :" << src.getGrade();
	return (out);
}
