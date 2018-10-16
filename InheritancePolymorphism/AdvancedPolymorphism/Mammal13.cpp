#include <iostream>

class Mammal
{
public:
    Mammal():age(1) {std::cout << "Mammal constructor...\n";}
    virtual ~Mammal() {std::cout << "Mammal destructor...\n";}
    virtual void speak() const {std::cout << "Mammal speak!\n";}
protected:
    int age;
};

class Cat : public Mammal
{
public:
    Cat() {std::cout << "Cat constructor...\n";}
    ~Cat() {std::cout << "Cat destructor...\n";}
    void speak() const {std::cout << "Meow!\n";}
    void purr() const {std::cout << "Purrrrrrrr!\n";}
};

class Dog : public Mammal
{
public:
    Dog() {std::cout << "Dog constructor...\n";}
    ~Dog() {std::cout << "Dog destructor...\n";}
    void speak() const {std::cout << "Woof!\n";}
};

int main()
{
    const int numMammals = 3;
    Mammal* zoo[numMammals];
    Mammal* pMammal;
    int choice, i;
    for (i = 0; i < numMammals; i++)
    {
        std::cout << "(1) Dog (2) Cat: ";
        std::cin >> choice;
        if (choice == 1)
            pMammal = new Dog;
        else
            pMammal = new Cat;
        zoo[i] = pMammal;
    }

    std::cout << "\n";

    for (i = 0; i < numMammals; i++)
    {
        zoo[i]->speak();

        // dynamic_cast operator ensures that when you cast, it's done safely
        // At runtime, the base pointer is examined. If conversion is proper, the new Cat pointer will be fine
        Cat *pRealCat = dynamic_cast<Cat *> (zoo[i]);

        if (pRealCat)
            pRealCat->purr();
        else
            std::cout << "Uh oh, not a cat!\n";
        
        delete zoo[i];
        std::cout << "\n";
    }
    return 0;
}