#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    SimpleCat(SimpleCat&);
    ~SimpleCat();

    int GetAge() const { return itsAge; }
    void SetAge(int age) { itsAge = age; }

private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor ..." << std::endl;
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Cat Copy Constructor ..." << std::endl;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor ..." << std::endl;
}

const SimpleCat & FunctionTwo (const SimpleCat & theCat);

int main()
{
    std::cout << "Making a cat ..." << std::endl;
    SimpleCat Frisky;
    std::cout << "Frisky is " << Frisky.GetAge() << " years old" << std::endl;

    int age = 5;
    Frisky.SetAge(age);
    std::cout << "Frisky is " << Frisky.GetAge() << " years old" << std::endl;

    std::cout << "Calling FunctionTwo..." << std::endl;
    FunctionTwo(Frisky);
    std::cout << "Frisky is " << Frisky.GetAge() << " years old" << std::endl;
    return 0;
}

// functionTwo passes a ref to a const object
const SimpleCat & FunctionTwo (const SimpleCat & theCat)
{
    std::cout << "FunctionTwo. Returning..." << std::endl;
    std::cout << "Frisky is now " << theCat.GetAge() << " years old" << std::endl;
    // theCat.SetAge(8); const!
    return theCat;
}