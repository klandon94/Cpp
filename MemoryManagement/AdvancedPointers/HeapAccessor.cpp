#include <iostream>

class SimpleCat
{
public:
    SimpleCat() {itsAge=2;}
    ~SimpleCat() {}
    int GetAge() const {return itsAge;}
    void SetAge(int age) {itsAge = age;}
private:
    int itsAge;
};

int main()
{
    SimpleCat *Frisky = new SimpleCat;
    // To access object on the heap, must dereference the pointer and call the dot operator on the object pointed to by pointer
    // shorthand operator for indirect access is points-to-operator (->), instead of (*pRags).GetAge()
    std::cout << "Frisky is " << Frisky ->GetAge() << " years old" << std::endl;

    Frisky -> SetAge(5);

    std::cout << "Frisky is " << Frisky ->GetAge() << " years old" << std::endl;
    
    delete Frisky;
    return 0;
}