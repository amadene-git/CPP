#include "Intern.hpp"


Intern::Intern(){}
Intern::Intern(Intern const & src)
{
   (void)src;
}

Intern  &Intern::operator=(Intern const & rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}
Form    *Intern::makeForm(std::string type, std::string target)
{
    std::string tab[3] = {"president pardon", "robotomy request", "shrubbery creation"};
    
    Form* (Intern::*pmf[4])(std::string);
    pmf[0] = &Intern::Error;
    pmf[1] = &Intern::President;
    pmf[2] = &Intern::Robotomy;
    pmf[3] = &Intern::Shrubbery;

    int i = ("president pardon" == type) * 1;
    i += ("robotomy request" == type) * 2;
    i += ("shrubbery creation" == type) * 3;
    if (i)
        std::cout << "Intern creates " << tab[i - 1] << std::endl;
    return ((this->*pmf[i])(target));
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
    (void)target;
    std::cout << "Type de formulaire inconnu :(" << std::endl;
    return (NULL);
}
