#include "Array.hpp"
#include <iostream>


int main()
{

    Array<char> tab(4);
    std::cout <<"Array<char> tab(4) ->" << std::endl;
 //   std::cout << (int)tab[0]<<(int)tab[1]<<(int)tab[2]<<(int)tab[3] << std::endl << std::endl;
    
    tab = "abcd";
    std::cout << "tab = \"abcd\"; -> " << std::endl;
    std::cout << "tab: " << tab << std::endl << std::endl;
    
    Array<char> copy(tab);
    std::cout << "Array<char> copy(tab); ->" << std::endl;
    std::cout << "copy: " << copy << std::endl << std::endl;

    copy = "lol";
    std::cout << "copy = \"lol\"; ->" << std::endl;
    std::cout << "copy: " << copy << std::endl;
    std::cout << "tab: " << tab << std::endl << std::endl;

    Array<char> long_str(12);
    long_str = "salut ca va?";
    tab = long_str;
    std::cout << "Array<char> long_str(12);\nlong_str = \"salut ca va?\";\ntab = long_str; ->" << std::endl;
    std::cout << "long_str: " << long_str << std::endl;
    std::cout << "tab: " << tab << std::endl << std::endl;

    int i[] = {1,2,3,4,5,6,7,8,9};
    Array<int>  a(9);
    a = i;
    std::cout << "int i[] = {1,2,3,4,5,6,7,8,9};\nArray<int>  a(9);\na = i; ->" << std::endl;
    for (int i = 0; i < 9; i++)
        std::cout << "["<<i<<"]" << ": " << a[i] << std::endl;

    std::cout << std::endl << "Exception : Array<char> bob(4); => try {bob[4];}" << std::endl;

    Array<char> bob(4);
    try {bob[4];}
    catch (std::exception &e){std::cout << e.what() << std::endl;}

    Array<float> billy;
    Array<float> phill(billy);
    
    return (0);

}

// #include <iostream>
// #include <Array.hpp>
// #include <cstdlib>
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }