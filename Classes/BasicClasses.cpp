#include <iostream>

// Class object's size in memory is determined by the sum of the sizes of its member variables
// Class functions don't take up any room as part of the memory set aside for the object

// Public data is like global data -- any code that uses the object can access the data. If it becomes changed,
// there's often a difficult time figuring out where it happened

class Tricycle
{
public:
    Tricycle(int initialSpeed);
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed;
};

// constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

// destructor for the object -- clean up after objects and free any memory that was allocated for them
Tricycle::~Tricycle() {}


// Accessors (getters/setters) -- functions used to obtain or alter value of a private member variable
    // enable you to separate the details of how the data is stored from how it is used

// get tricycle's speed
int Tricycle::getSpeed()
{
    return speed;
}

// set tricycle's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

// pedal the tricycle
void Tricycle::pedal()
{
    setSpeed(speed + 1);
    std:: cout << "\nPedaling; tricycle speed " << getSpeed() << " mph\n";
}

// apply the brake on the tricycle 
void Tricycle::brake()
{
    setSpeed(speed - 1);
    std::cout << "\nBreaking; tricycle speed " << getSpeed() << " mph\n";
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