#include <iostream>

// function prototypes: 
int findArea(int length, int width);
float convert(float);

void Area() 
{
    int length;
    int width;
    int area;

    std::cout << "\nHow wide is your yard? ";
    std::cin >> width;
    std::cout << "\nHow long is your yard? ";
    std::cin >> length;

    area = findArea(length, width);

    std::cout << "\nYour yard is ";
    std::cout << area;
    std::cout << " square feet\n\n";
}

void Temperature()
{
    float fahrenheit;
    float celsius;

    std::cout << "Please enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    celsius = convert(fahrenheit);
    std::cout << "\nHere's the temperature in Celsius: ";
    std::cout << celsius << "\n";
}

int main()
{
    Area();
    return 0;
}

// function definitions
int findArea(int l, int w)
{
    return l * w;
}

float convert(float fahrenheit)
{
    float celsius;
    celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}