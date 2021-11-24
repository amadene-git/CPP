#include "Bureaucrat.hpp"

int main()
{    
    try
	{
        Form        A;
        Form        B("B", 42, 42);
        Bureaucrat  bob("bob", 41);
        std::cout << std::endl;
        std::cout << A << std::endl << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(A);
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
        Form        A;
        Form        B("B", 42, 42);
        Bureaucrat  bob("bob", 43);

        std::cout << std::endl;
        std::cout << A << std::endl << B << std::endl << bob << std::endl;
        std::cout << std::endl;
        bob.signForm(A);
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
        Form        A("A", 42, 42);
        Bureaucrat  bob("bob", 43);

        std::cout << std::endl;
        std::cout << A << std::endl << bob << std::endl;
        std::cout << std::endl;
        A.beSigned(bob);
        std::cout << std::endl;
    }
	catch (std::exception & e)
    {
        std::cout << std::endl;
		std::cout << e.what() << std::endl;
        std::cout << std::endl;
	}





    return (0);
}