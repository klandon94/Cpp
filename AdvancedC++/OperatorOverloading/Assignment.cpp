#include <iostream>

class Tricycle
{
public:
    Tricycle();
    // copy constructor and destructor use default
    int getSpeed() const {return *speed;}
    void setSpeed(int newSpeed) {*speed = newSpeed;}
    Tricycle operator=(const Tricycle&);
private:
    int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle Tricycle::operator=(const Tricycle& rhs)
{
    if (this == &rhs)
        return *this;
    // delete and recreate speed member variable on the heap
    // good programming practice that avoids memory leaks when working with variable-length objects that do not overload their assignment operators
    delete speed;
    speed = new int;
    *speed = rhs.getSpeed();
    return *this;
}

int main()
{
    Tricycle wichita;
    std::cout << "Wichita's speed: " << wichita.getSpeed() << std::endl;
    std::cout << "Setting Wichita's speed to 6 ..." << std::endl;
    wichita.setSpeed(6);
    Tricycle dallas;
    std::cout << "Dallas' speed: " << dallas.getSpeed() << std::endl;
    std::cout << "Copying Wichita to Dallas ..." << std::endl;
    wichita = dallas;
    std::cout << "Wichita's speed: " << wichita.getSpeed() << std::endl;
    return 0;
}