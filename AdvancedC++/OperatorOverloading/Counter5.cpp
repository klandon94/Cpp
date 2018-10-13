#include <iostream>

class Counter
{
public:
    Counter();
    ~Counter() {}
    int getValue() const {return value;}
    void setValue(int x) {value = x;}
private:
    int value;
};

Counter::Counter():
value(0)
{}

int main()
{
    int beta = 5;
    // Since Counter class only has a default constructor, there is no member function for turning an int into a Counter object
    // compiler cannot figure out, absent such a function, that in int should be assigned to the object's member variable value
    Counter alpha = beta;
    std::cout << "alpha: " << alpha.getValue() << std::endl;
    return 0;
}