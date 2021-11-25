#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{    

//President
    try
	{
        PresidentialPardonForm        B("pouet");
        Bureaucrat  bob("bob", 41);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
    try
	{
        PresidentialPardonForm        B("pouet");
        Bureaucrat  bob("bob", 5);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        bob.executeForm(B);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;


 //Robotomy 
    try
	{
        RobotomyRequestForm        B("pouet");
        Bureaucrat  bob("bob", 150);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
    try
	{
        RobotomyRequestForm        B("pouet");
        Bureaucrat  bob("bob", 45);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        bob.executeForm(B);

        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
    try
	{
        RobotomyRequestForm        B("pouet");
        Bureaucrat  bob("bob", 0);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        bob.executeForm(B);

        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
   
//Shrubbery
    try
	{
        ShrubberyCreationForm        B("pouet");
        Bureaucrat  bob("bob", 150);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;
    try
	{
        ShrubberyCreationForm        B("pouet");
        Bureaucrat  bob("bob", 137);
        std::cout << std::endl;
        std::cout << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(B);
        B.execute(bob);
        bob.executeForm(B);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
	
        std::cout << std::endl;
    	std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}
    std::cout << "------------------------------------------------------------------------------------------------------" << std::endl;



    return (0);
}