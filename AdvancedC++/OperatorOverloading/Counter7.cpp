#include <iostream>

class Counter
{
public:
    Counter();
    ~Counter() {}
    Counter(int newValue);
    int getValue() const {return value;}
    void setValue(int x) {value = x;}
    // conversion operator is declared
    operator unsigned int();
private:
    int value;
};

Counter::Counter():
value(0)
{}

Counter::Counter(int newValue):
value(newValue)
{}

// returns the value of the object's value member variable. Integer returned by the function matches the type in the function declaration
Counter::operator unsigned int()
{
    return (value);
}

int main()
{
    Counter epsilon(19);
    int zeta = epsilon;
    std::cout << "zeta: " << zeta << std::endl;
    return 0;
}