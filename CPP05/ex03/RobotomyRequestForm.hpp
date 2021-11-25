#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"
# include <cstdlib>
class	RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
        std::string _target;
		
    public:
		RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
		virtual ~RobotomyRequestForm();
        
        virtual std::string     getTarget() const;
        virtual void            concret_exec(std::string target) const;
};

#endif
