#include <iostream>

class Counter
{
public:
    Counter();
    ~Counter() {}
    int getValue() const {return value;}
    void setValue(int x) {value=x;}
    const Counter& operator++();    // prefix
    const Counter operator++(int);  // postfix
private:
    int value;
};

Counter::Counter():
value(0)
{}

const Counter& Counter::operator++()    // prefix
{
    ++value;
    return *this;
}

// a temporary object must be created to hold the original value while the value of the original object is incremented
// the temporary object is returned because the postfix operator requires the original value, not the incremented value
const Counter Counter::operator++(int)  // postfix
{
    Counter temp(*this);
    ++value;
    return temp;
}

int main()
{
    Counter c;
    std::cout << "The value of c is " << c.getValue() << std::endl;
    c++;
    std::cout << "The value of c is " << c.getValue() << std::endl;
    ++c;
    std::cout << "The value of c is " << c.getValue() << std::endl;
    Counter a = ++c;
    std::cout << "The value of a: " << a.getValue();
    std::cout << " and c: " << c.getValue() << std::endl;
    // postfix operator returns the value before incrementing it
    a = c++;
    std::cout << "The value of a: " << a.getValue();
    std::cout << " and c: " << c.getValue() << std::endl;
    return 0;
}