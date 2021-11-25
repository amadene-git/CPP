#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);
        std::string _target;
		
    public:
		PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
		virtual ~PresidentialPardonForm(void);
        
        virtual std::string     getTarget() const;
        virtual void            concret_exec(std::string target) const;
};

#endif
