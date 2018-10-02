#include <iostream>

void Rectangle() 
{
    // Creates custom type definition
    typedef unsigned short USHORT;

    USHORT width = 26;
    USHORT length = 40;

    USHORT area = width * length;

    std::cout << "Width: "  << width << "\n";
    std::cout << "Length: "  << length << "\n";
    std::cout << "area: "  << area << "\n";
}

void Compass()
{
    // Each enum constant carries a 0-based integer value
    enum Direction {North, Northeast, East, Southeast, South, Southwest, West, Northwest};

    Direction heading;
    heading = Southeast;

    std::cout << "\nMoving " << heading << std::endl;
}

void Combat()
{
    auto strength = 80;
    auto accuracy = 45.5;
    auto dexterity = 24.0;

    const auto MAXIMUM = 50;

    auto attack = strength * (accuracy / MAXIMUM);
    auto damage = strength * (dexterity / MAXIMUM);

    std::cout << "\nAttack rating: " << attack << "\n";
    std::cout << "Damage rating: " << damage << "\n";
}

int main()
{
    Rectangle();
    Compass();
    Combat();
    return 0;
}