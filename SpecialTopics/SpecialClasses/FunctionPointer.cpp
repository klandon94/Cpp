#include <iostream>

void square(int&, int&);
void cube(int &, int&);
void swap(int&, int&);
void getVals(int&, int&);
void printVals(int, int);

int main()
{
    // pointer to function does not need to be dereferenced, although you're free to do so
    // if pFunc is a pointer to a function taking an integer and returning a variable of type long and you assign pFunc to a matching function, you can invoke that function by
    // doing pFunc(x) OR (*pFunc)(x)
    void (*pFunc)(int&, int&);
    bool fQuit = false;

    int valOne = 1, valTwo = 2;
    int choice;
    while (fQuit == false)
    {
        std::cout << "(0) Quit (1) Change Values " << "(2) Square (3) Cube (4) Swap: ";
        std::cin >> choice;
        switch(choice)
        {
        case 1:
            pFunc = getVals;
            break;
        case 2:
            pFunc = square;
            break;
        case 3:
            pFunc = cube;
            break;
        case 4:
            pFunc = swap;
            break;
        default:
            fQuit = true;
            break;
        }
        if (fQuit)
            break;
        
        printVals(valOne, valTwo);
        pFunc(valOne, valTwo);
        printVals(valOne, valTwo);
    }
    return 0;
}

void printVals(int x, int y)
{
    std::cout << "x: " << x << " y: " << y << "\n";
}

void square(int &rX, int &rY)
{
    rX *= rX;
    rY *= rY;
}

void cube(int &rX, int &rY)
{
    int tmp;

    tmp = rX;
    rX *= rX;
    rX = rX * tmp;

    tmp = rY;
    rY *= rY;
    rY = rY * tmp;
}

void swap(int &rX, int &rY)
{
    int temp;
    temp = rX;
    rX = rY;
    rY = temp;
}

void getVals(int &rValOne, int &rValTwo)
{
    std::cout << "New value for valOne: ";
    std::cin >> rValOne;
    std::cout << "New value for valTwo: ";
    std::cin >> rValTwo;
}