#include "whatever.hpp"
#include "iostream"

int main()
{

    {
        std::cout << "42 MAIN ****************************************" << std::endl;
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        std::cout << "42 MAIN ****************************************" << std::endl << std::endl;
    }

    std::cout << "*** SWAP ***" << std::endl;
    int a = 123;
    int b = 456;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << "; b = " << b << std::endl << std::endl;

    std::string    s1 = "abc";
    std::string    s2 = "def";
    std::cout << "s1 = " << s1 << "; s2 = " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "s1 = " << s1 << "; s2 = " << s2 << std::endl << std::endl;

    std::cout << "*** MAX ***" << std::endl;
    std::cout << "a = " << a << " (" << &a << ") ; b = " << b  << " (" << &b << \
    ") => max : " << max(a, b) << "->" << &max(a, b) << std::endl << std::endl;
   
    a = 41;
    b = 42;
    std::cout << "a = " << a << " (" << &a << ") ; b = " << b  << " (" << &b << \
    ") => max : " << max(a, b) << "->" << &max(a, b) << std::endl << std::endl;
   
    a = 42;
    b = 42;
    std::cout << "a = " << a << " (" << &a << ") ; b = " << b  << " (" << &b << \
    ") => max : " << max(a, b) << "->" << &max(a, b) << std::endl << std::endl;
   
    a = 1;
    b = 2;
    std::cout << "a = " << a << " (" << &a << ") ; b = " << b  << " (" << &b << \
    ") => min : " << min(a, b) << "->" << &min(a, b) << std::endl << std::endl;
   
    a = 42;
    b = 42;
    std::cout << "a = " << a << " (" << &a << ") ; b = " << b  << " (" << &b << \
    ") => min : " << min(a, b) << "->" << &min(a, b) << std::endl << std::endl;


    return (0);
}

