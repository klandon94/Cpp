#include <iostream>

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    ~SimpleCat() {}
    int GetAge() {return itsAge;}
    int GetWeight() {return itsWeight;}
private:
    int itsAge;
    int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
itsAge(age), itsWeight(weight) {}

SimpleCat &TheFunction();

int main()
{
    SimpleCat &rCat = TheFunction();
    int age = rCat.GetAge();
    std::cout << "rCat is " << age << " years old!" << std::endl;
    std::cout << "&rCat: " << &rCat << std::endl;
    // How do you get rid of that memory?
    // Create another pointer and initialize it with the address obtained from rCat, which deletes the memory and plugs the memory leak
    SimpleCat *pCat = &rCat;
    delete pCat;
    // Uh oh, rCat now refers to ?
    // A reference always must be an alias for an actual object, if it references a null object, the program is invalid
    // (although the program might compile, it is invalid and its performance is unpredictable)
    return 0;
}

SimpleCat &TheFunction()
{
    // Memory is allocated on the heap and assigned to a pointer
    SimpleCat *pFrisky = new SimpleCat(5,9);
    std::cout << "pFrisky: " << pFrisky << std::endl;
    // return *pFrisky;
    return pFrisky  // return pointer rather than the dereferenced pointer (pointer to memory created in line 39)
}