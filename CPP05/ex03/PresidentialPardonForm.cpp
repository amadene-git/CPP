#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm string constructor called -> " << this << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : _target(src.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called -> " << this << std::endl;
}
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs.getTarget();
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm default destructor called -> " << this << std::endl;
}

std::string     PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void           PresidentialPardonForm::concret_exec(std::string target) const
{
    std::cout << target << " a été pardonnée par Zafod Beeblebrox." << std::endl;
}