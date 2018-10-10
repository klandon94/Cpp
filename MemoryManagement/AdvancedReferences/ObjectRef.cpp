#include <iostream>

class SimpleCat
{
public:
    SimpleCat();    // constructor
    SimpleCat(SimpleCat&);   // copy constructor
    ~SimpleCat();   // destructor
};

SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor ..." << std::endl;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Cat Copy Constructor ..." << std::endl;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor ..." << std::endl;
}

SimpleCat FunctionOne (SimpleCat theCat);
SimpleCat* FunctionTwo (SimpleCat *theCat);

int main()
{
    std::cout << "Making a cat ..." << std::endl;
    SimpleCat Frisky;
    std::cout << "Calling FunctionOne ..." << std::endl;
    // Because FunctionOne is called passing the SimpleCat object by value, a copy of the SimpleCat object is made
    // on the stack as an object local to the called function --> causes copy constructor to be called
    FunctionOne(Frisky);
    std::cout << "Calling FunctionTwo ..." << std::endl;
    FunctionTwo(&Frisky);
    return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    std::cout << "Function One. Returning ..." << std::endl;
    // return value is not assigned to any object, so the temporary object created for the return is thrown away, calling the destructor
    // Once FunctionOne has ended, its local copy goes out of scope and is destroyed, calling the destructor once again
    return theCat;
}

// functionTwo, passes by reference
SimpleCat* FunctionTwo (SimpleCat *theCat)
{
    std::cout << "Function Two. Returning ..." << std::endl;
    return theCat;
}