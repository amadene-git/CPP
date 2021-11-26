#include "main.hpp"


uintptr_t serialize(Data* ptr)
{

    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
int main()
{
    Data    ptr;

    std::cout << "ptr addr: "<< &ptr << std::endl;
    std::cout << "->" << deserialize(serialize(&ptr)) << std::endl;

    ptr.i = 42;
    ptr.str = "coucou";
    uintptr_t foo = serialize(&ptr);

    std::cout << deserialize(foo)->i << " " << deserialize(foo)->str << std::endl;


}