#include <iostream>

class Tricycle
{
public:
    Tricycle();                 // default constructor
    Tricycle(const Tricycle&);  // copy constructor
    ~Tricycle();                // destructor
    int getSpeed() const {return *speed;}
    void setSpeed(int newSpeed) {*speed = newSpeed;}
    void pedal();
    void brake();
private:
    int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle& rhs)
{
    // allocates room on the heap for an int variable and assigns a value to it 
    // copy constructor --> rhs = right-hand side (common naming convention for parameter of copy constructor)
    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle::~Tricycle()
{
    delete speed;
    speed = NULL;
}

void Tricycle::pedal()
{
    setSpeed(*speed + 1);
    std::cout << "\nPedaling " << getSpeed() << " mph" << std::endl;
}

void Tricycle::brake()
{
    setSpeed(*speed - 1);
    std::cout << "\nPedaling " << getSpeed() << " mph" << std::endl;
}

int main()
{
    std::cout << "Creating trike named wichita ...";
    Tricycle wichita;
    wichita.pedal();
    std::cout << "Creating trike named dallas ..." << std::endl;
    Tricycle dallas(wichita);
    std::cout << "wichita's speed: " << wichita.getSpeed() << std::endl;
    std::cout << "dallas's speed: " << dallas.getSpeed() << std::endl;
    std::cout << "setting wichita to 10 ..." << std::endl;
    wichita.setSpeed(10);
    // should demonstrate that the 2 objects are stored in separate areas of memory
    std::cout << "wichita's speed: " << wichita.getSpeed() << std::endl;
    std::cout << "dallas's speed: " << dallas.getSpeed() << std::endl;
    return 0;
}