#include <iostream>

class Dog
{
public:
    void speak() const {std::cout << "Woof!\n";}
    void move() const {std::cout << "Walking to heel...\n";}
    void eat() const {std::cout << "Gobbling food...\n";}
    void growl() const {std::cout << "Grrrr...\n";}
    void whimper() const {std::cout << "Whining noises...\n";}
    void rollOver() const {std::cout << "Rolling over...\n";}
    void playDead() const {std::cout <<"Is this the end of Little Caesar?\n";}
};

// declares PDF to be a pointer to a member function of Dog that takes no arguments, returns no values and is const
typedef void (Dog::*PDF)() const;

int main()
{
    const int maxFuncs = 7;
    PDF dogFunctions[maxFuncs] = 
        {
            &Dog::speak,
            &Dog::move,
            &Dog::eat,
            &Dog::growl,
            &Dog::whimper,
            &Dog::rollOver,
            &Dog::playDead
        };
    Dog* pDog = 0;
    int method;
    bool fQuit = false;

    while (!fQuit)
    {
        std::cout << "(0) Quit (1) Speak (2) Move (3) Eat (4) Growl\n";
        std::cout << "(5) Whimper (6) Roll Over (7) Play Dead: ";
        std::cin >> method;
        if (method == 0)
        {
            fQuit = true;
            break;
        }
        else
        {
            // new Dog is created on the heap and the correct function is invoked on the array
            pDog = new Dog;
            (pDog->*dogFunctions[method-1])();
            delete pDog;
        }
        std::cout << std::endl;
    }
    return 0;
}