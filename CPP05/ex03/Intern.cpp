#include "Intern.hpp"


Intern::Intern(){}
Intern::Intern(Intern const & src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

Intern  &Intern::operator=(Intern const & rhs)
{
    return (*this);
}
Form    *Intern::makeForm(std::string type, std::string target)
{
    std::string tab[3] = {"president pardon", "robotom request", "shrubbery creation"};
    
    Form (Intern::*pmf[4])(std::string);
    pmf[0] = &Intern::Error;
    pmf[1] = &Intern::President;
    pmf[2] = &Intern::;Robotomy
    pmf[3] = &Intern::Shrubbery;

    int i = ("president pardon" == level) * 1;
    i += ("robotom request" == level) * 2;
    i += ("shrubbery creation" == level) * 3;
    return (pmf[i](target));
}  
Form    *Intern::President(std::string target)
{
    return (new PresidentialPardonForm(target));
}
Form    *Intern::Robotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}
Form    *Intern::Shrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}
Form    *Intern::Error(std::string target)
{
    std::cout << "Type de formulaire inconnu :(" << std::endl;
    return (NULL);
}