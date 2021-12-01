#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{    
	Intern jeannot;

    Form *A = jeannot.makeForm("president pardon", "bulle");
    Form *B = jeannot.makeForm("robotomy request", "belle");
    Form *C = jeannot.makeForm("shrubbery creation", "rebelle");
    Form *null = jeannot.makeForm("lolilol", "mdr");

	std::cout << null << std::endl;
    Bureaucrat God("God", 1);

    std::cout << 1 << std::endl;
    God.executeForm(*A);
    std::cout << 1 << std::endl;
    God.executeForm(*B);
    std::cout << 1 << std::endl;
	God.executeForm(*C);
	std::cout << 1 << std::endl;

	God.signForm(*A);
	God.signForm(*B);
	God.signForm(*C);

    std::cout << 1 << std::endl;
    God.executeForm(*A);
    std::cout << 1 << std::endl;
    God.executeForm(*B);
    std::cout << 1 << std::endl;
	God.executeForm(*C);
	std::cout << 1 << std::endl;
    
	return (0);
}
