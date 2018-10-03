#include <iostream>

class Rectangle
{
public:
    Rectangle();
    ~Rectangle();
    // this is a pointer, which points to the individual object in which the function is running
    // stores the memory address of the object it is referencing
    void SetLength(int length) {this->itsLength = length;}
    int GetLength() const {return this->itsLength;}
    void SetWidth(int width) {itsWidth = width;}
    int GetWidth() const {return itsWidth;}
private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::~Rectangle() {}

int main()
{
    Rectangle theRect;
    std::cout << "theRect is " << theRect.GetLength() << " feet long." << std::endl;
    std::cout << "theRect is " << theRect.GetWidth() << " feet wide." << std::endl;

    theRect.SetLength(20);
    theRect.SetWidth(10);

    std::cout << "theRect is " << theRect.GetLength() << " feet long." << std::endl;
    std::cout << "theRect is " << theRect.GetWidth() << " feet wide." << std::endl;

    return 0;
}