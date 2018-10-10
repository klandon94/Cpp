#include <iostream>

// function prototype -- examining the parameters declared in the prototype, which is typically in a header file
// along with all other prototypes, programmer knows that the values passed into swap are passed by reference
void swap (int &x, int &y);

int main()
{
    int x = 5, y = 10;

    std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
    // values from main are passed by reference (because parameters to swap are declared to be references)
    swap(x, y);
    std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;
    return 0;
}

void swap (int &rx, int &ry)
{
    int temp;

    std::cout << "Swap. Before swap, rx: " << rx << " ry: " << ry << std::endl;

    temp = rx;
    rx = ry;
    ry = temp;

    std::cout << "Swap. After swap, rx: " << rx << " ry: " << ry << std::endl;
}