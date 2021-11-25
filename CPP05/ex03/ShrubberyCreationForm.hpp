#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
        ShrubberyCreationForm(void);
		std::string _target;
	
    public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
		virtual ~ShrubberyCreationForm();

		virtual std::string		getTarget(void) const;

		virtual void			concret_exec(std::string target) const;
};

#endif
