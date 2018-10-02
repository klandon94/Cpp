#include <iostream>

// Put class declaration in a header file with the same name ending with the file extension .hpp
// Definition of class functions would be in corresponding name followed by normal extension .cpp
    // must incorporate header file into .cpp file with a preprocessor directive, #include "Tricycle.hpp"

class Tricycle
{
public:
    Tricycle(int initialSpeed);
    ~Tricycle();
    int getSpeed() const {return speed;}
    void setSpeed(int speed);
    void pedal()
    {
        setSpeed(speed + 1);
        std::cout << "Pedaling " << getSpeed() << " mph\n\n";
    }
    void brake()
    {
        setSpeed(speed - 1);
        std::cout << "Pedaling " << getSpeed() << " mph\n\n";
    }
private:
    int speed;
};