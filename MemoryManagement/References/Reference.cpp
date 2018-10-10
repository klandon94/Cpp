#include <iostream>

int main()
{
    int intOne;
    // reference to int named rSomeRef
    int &rSomeRef = intOne;

    intOne = 5;
    std::cout << "intOne: " << intOne << std::endl;
    std::cout << "rSomeRef: " << rSomeRef << std::endl;

    // references are initialized when created and always act as a synonym for their target, even when the address-of operator is applied
    std::cout << "&intOne: " << &intOne << std::endl;
    std::cout << "&rSomeRef: " << &rSomeRef << std::endl;

    return 0;
}