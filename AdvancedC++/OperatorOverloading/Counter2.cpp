#include <iostream>

class Counter
{
public:
    Counter();
    ~Counter() {}
    int getValue() const {return value;}
    void setValue(int x) {value = x;}
    void increment() {++value;}
    const Counter& operator++();
private:
    int value;
};

Counter::Counter():
value(0)
{}

// operator overloading provides functionality that would otherwise be missing in user-defined classes such as Counter
// when implementing an operator for a class, you're overloading that operator
const Counter& Counter::operator++()
{
    ++value;
    // value returned is a Counter reference, thereby avoiding the creation of an extra temporary object
    return *this;
}

int main()
{
    Counter c;
    std::cout << "The value of c is " << c.getValue() << std::endl;
    c.increment();
    std::cout << "The value of c is " << c.getValue() << std::endl;
    ++c;
    std::cout << "The value of c is " << c.getValue() << std::endl;
    Counter a = ++c;
    std::cout << "The value of a: " << a.getValue();
    std::cout << " and c: " << c.getValue() << std::endl;
    return 0;
}