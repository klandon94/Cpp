#include <iostream>

double findArea(double length, double width, double height)
{
    return length * width * height;
}

int main()
{
    auto length = 50.0;
    auto width = 30.0;
    auto height = 3.5;

    auto area = findArea(length, width, height);

    std::cout << "Area: " << area << std::endl;
    return 0;
}