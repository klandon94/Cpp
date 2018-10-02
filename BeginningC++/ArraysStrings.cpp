#include <iostream>

// number of an array is known as its subscript

void WeightGoals()
{
    float goal[4];
    goal[0] = 0.9;
    goal[1] = 0.75;
    goal[2] = 0.5;
    goal[3] = 0.25;
    float weight, target;

    std::cout << "Enter current weight: ";
    std::cin >> weight;
    std::cout << "\nEnter goal weight: ";
    std::cin >> target;
    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        float loss = (weight - target) * goal[i];
        std::cout << "Goal " << i << ": ";
        std::cout << target + loss << std::endl;
    }
    return;
}

void Box()
{
    int box[5][3] = {8, 6, 7, 5, 3, 0, 9, 2, 1, 7, 8, 9, 0, 5, 2};
    // same as following initialization:
    // int box[5][3] = {
    //     {8 , 6, 7},
    //     {5, 3, 0},
    //     {9, 2, 1},
    //     {7, 8, 9},
    //     {0, 5, 2}
    // };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "box[" << i << "]";
            std::cout << "[" << j << "] = ";
            std::cout << box[i][j] << "\n";
        }
    }
}

void BridgeKeeper()
{
    // String is an array of characters ending with a null character, special character coded as "\0"
    char name[50];
    char quest[80];
    char velocity[80];

    std::cout << "\nWhat is your name? ";
    // getline() function of cin object takes two arguments: buffer to fill, and maximum number of characters to get
    std::cin.getline(name, 49);

    std::cout << "\nWhat is your quest? ";
    std::cin.getline(quest, 79);

    std::cout << "\nWhat is the velocity of an unladen swallow? ";
    std::cin.getline(velocity, 79);

    std::cout << "\nName: " << name << std::endl;
    std::cout << "\nQuest: " << quest << std::endl;
    std::cout << "\nVelocity: " << velocity << std::endl;
}

void Production()
{
    int production[] = {10500, 16000, 5800, 4500, 13900};

    for (int year : production)
    {
        std::cout << "Output: " << year << std::endl;
    }
}

int main()
{
    // WeightGoals();
    // Box();
    // BridgeKeeper();
    Production();
}