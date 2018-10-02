#include "Tricycle.hpp"

// good practice to declare as many functions to be const as possible
    // enables the compiler to catch unintended changes to member variables, instead of letting these errors show up when your program is running

Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

Tricycle::~Tricycle() {}

void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0;
}