#ifndef INTERN_HPP
# define INTERN_HPP
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <Form.hpp>
#include <iostream>
#include <string>


class Intern
{
    public:
        Intern();
		Intern(Intern const & src);
		Intern & operator=(Intern const & rhs);
        
        
        Form    *makeForm(std::string type, std::string target);


    private:   
        Form    *President(std::string target);
        Form    *Robotomy(std::string target);
        Form    *Shrubbery(std::string target);
        Form    *Error(std::string target);

};

#endif