#include <stack>
#include <iostream>
#include "mutantstack.hpp"



int main()
{
    {
        std::cout << "42 test ***************************" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);
        std::cout << "42 test ***************************" << std::endl << std::endl;
    }
     

    MutantStack<int> mutant;

    std::cout << *mutant.begin() << std::endl;
    mutant.push(12);
    mutant.push(13);
    mutant.push(14);

    MutantStack<int>::iterator iter;
    iter = mutant.begin() + 2;
    std::cout << *mutant.begin() << std::endl;
    std::cout << mutant.top() << std::endl;
    std::cout << *iter << std::endl;
    iter = mutant.begin();

    std::cout << iter[2] << std::endl;
    return (0);
}