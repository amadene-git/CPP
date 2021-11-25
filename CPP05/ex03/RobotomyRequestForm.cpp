#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm string constructor called -> " << this << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : _target(src.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called -> " << this << std::endl;
}
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs.getTarget();
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm default destructor called -> " << this << std::endl;
}

std::string     RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void           RobotomyRequestForm::concret_exec(std::string target) const
{
    srand(time(NULL));
	int ret = rand() % 2;

    if (ret)
    {
        std::cout << "**BBBBBVVVVVVVBBBBBBVVVVVVVVVBVBVVVVVVBVVVV** ... ... ... "<< target << " a bien été robotomizé." << std::endl;
    }
    else
    {
        std::cout << "Aie la perçeuse est en panne on pourra pas robotomisé " << target << " :(" << std::endl;
    }
}