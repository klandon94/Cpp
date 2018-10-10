#include <iostream>

void swap(int x, int y);

int main()
{
    int x = 5, y = 10;

    std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
    swap(x,y);
    // x and y are being passed to swap by value, local copies were made in the function and those 
    // copies were swapped, but the originals remained unchanged
    std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;
    return 0;
}

void swap (int x, int y)
{
    int temp;

    std::cout << "Swap. Before swap, x: " << x << " y: " << y << std::endl;

    temp = x;
    x = y;
    y = temp;

    std::cout << "Swap. After swap, x: " << x << " y: " << y << std::endl;
}