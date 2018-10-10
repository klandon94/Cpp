#include <iostream>

short factor(int, int*, int*);

int main()
{
    int number, squared, cubed;
    short error;

    std::cout << "Enter a number (0 - 20): ";
    std::cin >> number;

    error = factor(number, &squared, &cubed);

    if (!error)
    {
        std::cout << "number: " << number << "\n";
        std::cout << "square: " << squared << "\n";
        std::cout << "cubed: " << cubed << "\n";
    }
    else
        std::cout << "Error encountered!\n";
    return 0;
}

short factor(int n, int *pSquared, int *pCubed)
{
    short value = 0;
    if (n > 20)
    {
        value = 1;
    }
    else
    {
        *pSquared = n*n;
        *pCubed = n*n*n;
        value = 0;
    }
    // Passing by reference enables a function to change the original objects, so this 
    // bypasses the return value of the function, which then can be reserved for reporting errors
    return value;
}