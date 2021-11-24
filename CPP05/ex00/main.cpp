#include "Bureaucrat.hpp"

int main()
{    
    try
	{
        Bureaucrat bob;
        Bureaucrat boby("boby");
        Bureaucrat bobo("bobo", 1);
        Bureaucrat bilbo("bilbo", 150);
        Bureaucrat bolbi(55, "bolby");
    }
	catch (std::exception & e)
    {
		std::cout << e.what() << std::endl;
	}
    
    try
    {
        Bureaucrat bob("bob", 151);
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 0);
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 150);
        bob.decGrade();
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 1);
        bob.incGrade();
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }






    return (0);
}