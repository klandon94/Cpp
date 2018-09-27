#include <iostream>

void Thirteens()
{
    int counter = 0;
    while (counter < 500)
    {
        counter++;
        if (counter % 13 == 0)
        {
            std::cout << counter << " ";
        }
    }
    std::cout << "\n";
    return;
}

// Do while runs a block of code at least once, even if the tested condition is never true
void Badger()
{
    int badger;
    std::cout << "How many badgers? ";
    std::cin >> badger;

    do
    {
        std::cout << "Badger ";
        badger--;
    } while (badger > 0);

    std::cout << "\n";
    return;
}

void MultTable()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "\nFirst 10 Multiples of " << number << ":\n";

    for (int counter = 1; counter < 11; counter++)
    {
        std::cout << number * counter << " ";
    }
    std::cout << "\n";
    return;
}

// Advanced for loop
void forLoop()
{
    int x = 0;
    int y = 0;
    for (; x < 10; x++, y++)
    {
        std::cout << x * y << "\n";
    }
}

void BoxMaker()
{
    int rows, columns;
    char character;

    std::cout << "How many rows? ";
    std::cin >> rows;
    std::cout << "How many columns? ";
    std::cin >> columns;
    std::cout << "What character to display? ";
    std::cin >> character;

    std::cout << "\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << character;
        }
        std::cout << "\n";
    }
    return;
}

// Switch statement simplifies the process of checking the same variable for a set of different equality values, better to develop and debug
void BadTeacher()
{
    char grade;
    std::cout << "Enter your letter grade (ABCDF): ";
    std::cin >> grade;
    switch(grade)
    {
        case 'A':
            std::cout << "Finally!\n";
            break;
        case 'B':
            std::cout << "You can do better!\n";
            break;
        case 'C':
            std::cout << "I'm disappointed in you!\n";
            break;
        case 'D':
            std::cout << "You're not smart!\n";
            break;
        case 'F':
            std::cout << "Get out of my sight!\n";
            break;
        default:
            std::cout << "That's not even a grade!\n";
            break;
    }
}

int main()
{
    // Thirteens();
    // Badger();
    // MultTable();
    // forLoop();
    // BoxMaker();
    BadTeacher();
}