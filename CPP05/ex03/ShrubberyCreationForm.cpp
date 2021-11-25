#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm string constructor called -> " << this << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : _target(src.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called -> " << this << std::endl;
}
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs.getTarget();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm default destructor called -> " << this << std::endl;
}

std::string     ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void           ShrubberyCreationForm::concret_exec(std::string target) const
{
    std::string		fileName = target + "_shrubbery";
	std::ofstream	ofs(fileName.c_str());
	if (!ofs.is_open())
		std::cout << "Error opening file : " << fileName << std::endl;
	else
	{
		ofs << "                                                    .                                                 " << std::endl
		    << "                                          .         ;                                                 " << std::endl        
		    << "             .              .              ;%     ;;                                                  " << std::endl               
		    << "               ,           ,                :;%  %;                                                   " << std::endl         
		    << "                :         ;                   :;%;'     .,                                            " << std::endl        
		    << "       ,.        %;     %;            ;        %;'    ,;                                              " << std::endl       
		    << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'                                               " << std::endl       
		    << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'                                                " << std::endl            
		    << "           ;%;      %;        ;%;        % ;%;  ,%;'                                                  " << std::endl   
		    << "            `%;.     ;%;     %;'         `;%%;.%;'                                                    " << std::endl  
		    << "             `:;%.    ;%%. %@;        %; ;@%;%'                                                       " << std::endl  
		    << "                `:%;.  :;bd%;          %;@%;'                                                         " << std::endl          
		    << "                  `@%:.  :;%.         ;@@%;'                                                          " << std::endl              
		    << "                    `@%.  `;@%.      ;@@%;                                                            " << std::endl                  
		    << "                      `@%%. `@%%    ;@@%;                                                             " << std::endl              
		    << "                        ;@%. :@%%  %@@%;                                                              " << std::endl              
		    << "                          %@bd%%%bd%%:;                                                               " << std::endl          
		    << "                            #@%%%%%:;;                            ccee88oo                            " << std::endl      
		    << "                            %@@%%%::;                          C8O8O8Q8PoOb o8oo                      " << std::endl  
		    << "                            %@@@%(o);  . '                    dOB69QO8PdUOpugoO9bD                    " << std::endl                  
		    << "                            %@@@o%;:(.,'                     CgggbU8OU qOp qOdoUOdcb                  " << std::endl              
		    << "                        `.. %@@@o%::;                            6OuU  /p u gcoUodpP                  " << std::endl              
		    << "                           `)@@@o%::;                              \\\\//  /douUP                     " << std::endl              
		    << "                            %@@(o)::;                               \\\\////                          " << std::endl          
		    << "                           .%@@@@%::;                                |||/\\                           " << std::endl              
		    << "                           ;%@@@@%::;.                               |||\\/                           " << std::endl              
		    << "                          ;%@@@@%%:;;;.                              |||||                            " << std::endl      
		    << "                      ...;%@@@@@%%:;;;;,..                     .....//||||\\....                      " << std::endl;
        ofs.close();
		std::cout << fileName << " is created !" << std::endl;
	}
}