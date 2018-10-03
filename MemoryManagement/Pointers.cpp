#include <iostream>

void Pointer()
{
    int myAge;
    int *pAge = nullptr;

    myAge = 5;
    pAge = &myAge;
    std::cout << "myAge: " << myAge << "\n";
    std::cout << "*pAge: " << *pAge << "\n\n";
    std::cout << pAge;
}

void PointerCheck()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int *pAge = &myAge;  // a pointer

    std::cout << "myAge:\t" << myAge;
    std::cout << "\t\tyourAge:\t" << yourAge << "\n";
    std::cout << "&myAge:\t" << &myAge;
    std::cout << "\t&yourAge:\t" << &yourAge << "\n";

    std::cout << "pAge:\t" << pAge << "\n";
    std::cout << "*pAge:\t" << *pAge << "\n\n";

    pAge = &yourAge;    // reassign the pointer

    std::cout << "myAge:\t" << myAge;
    std::cout << "\t\tyourAge:\t" << yourAge << "\n";
    std::cout << "&myAge:\t" << &myAge;
    std::cout << "\t&yourAge:\t" << &yourAge << "\n";

    std::cout << "pAge:\t" << pAge << "\n";
    std::cout << "*pAge:\t" << *pAge << "\n\n";

    std::cout << "&pAge:\t" << &pAge << "\n";
}

void Heap()
{
    // for every time in program that new is called, there should be a call to delete
    // Important to keep track of which pointer owns an area of memory and to ensure that 
    // memory is returned to the heap when you are done with it
    int localVariable = 5;
    int *pLocal = &localVariable;
    int *pHeap = new int;
    if (pHeap == nullptr)
    {
        std::cout << "Error! No memory for pHeap!!";
        return;
    }
    *pHeap = 7;
    std::cout << "localVariable: " << localVariable << "\n";
    std::cout << "*pLocal: " << *pLocal << "\n";
    std::cout << "*pHeap: " << *pHeap << "\n";
    delete pHeap;
    pHeap = new int;
    if (pHeap == nullptr)
    {
        std::cout << "Error! No memory for pHeap!!";
        return;
    }
    *pHeap = 9;
    std::cout << "*pHeap: " << *pHeap << "\n";
    // redundant, the end of the program would have returned the memory from the heap.
    // however, good idea to free this memory explicitly (incase the program changes or is extended)
    delete pHeap;
}

void Swapper()
{
    int value1 = 12500;
    int value2 = 1700;
    int *pointer2 = nullptr;

    // give pointer the address of value2
    pointer2 = &value2;

    // dereference the pointer and assign to value1
    value1 = *pointer2;
    pointer2 = 0;

    std::cout << "value1 = " << value1 << "\n";
}

int main()
{
    // Pointer();
    // PointerCheck();
    // Heap();
    Swapper();
    return 0;
}