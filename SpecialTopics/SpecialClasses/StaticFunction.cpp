#include <iostream>

class Robot
{
public:
    Robot(int newAge = 1):age(newAge) {howManyRobots++;}
    virtual ~Robot() {howManyRobots--;}
    virtual int getAge() {return age;}
    virtual void setAge(int newAge) {age = newAge;}
    // no need to have an object of type Robot on which to call it
    // static member functions do not have a this pointer, so they cannot be declared const
    static int getHowMany() {return howManyRobots;}
private:
    int age;
    static int howManyRobots;
};

int Robot::howManyRobots = 0;

void countRobots();

int main()
{
    const int maxRobots = 5;
    Robot *gestalt[maxRobots];
    int i;
    for (i = 0; i < maxRobots; i++)
    {
        gestalt[i] = new Robot(i);
        countRobots();
    }
    for (i = 0; i < maxRobots; i++)
    {
        delete gestalt[i];
        countRobots();
    }
    return 0;
}

void countRobots()
{
    std::cout << "There are " << Robot::getHowMany() << " robots.\n";
}