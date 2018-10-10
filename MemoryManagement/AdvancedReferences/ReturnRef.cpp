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
    // when TheFunction() returns, the local object Frisky is destroyed
    // the reference returned by this function is to a non-existent object, which is a bad thing
    SimpleCat &rCat = TheFunction();
    int age = rCat.GetAge();
    std::cout << "rCat is " << age << " years old!" << std::endl;
    return 0;
}

SimpleCat &TheFunction()
{
    SimpleCat Frisky(5,9);
    return Frisky;
}

// ReturnRef.cpp:31:12: warning: reference to stack memory associated with local variable 'Frisky' returned [-Wreturn-stack-address]
//     return Frisky;
//            ^~~~~~
// 1 warning generated.
// rCat is -283585448 years old!