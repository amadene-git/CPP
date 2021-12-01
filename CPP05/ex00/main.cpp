#include "Bureaucrat.hpp"

int main()
{    
   
	std::cout << "test 1:\n";
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
    
	std::cout << "test 2:\n";
    try
    {
        Bureaucrat bob("bob", 151);
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
	
	std::cout << "test 3:\n";
    try
    {
        Bureaucrat bob("bob", 0);
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
	
	std::cout << "test 4:\n";
    try
    {
        Bureaucrat bob("bob", 150);
        bob.decGrade();
    }
	catch (std::exception & e) 
    {
		std::cout << e.what() << std::endl;
    }
	
	std::cout << "test 5:\n";
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
