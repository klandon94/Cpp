#include <iostream>

class Rectangle
{
public:
    Rectangle(int width, int height);
    ~Rectangle() {}
    void drawShape() const;
    // drawShape function is overloaded, original just passes the current member variables
    void drawShape(int width, int height) const;
private:
    int width;
    int height;
};

Rectangle::Rectangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;
}

void Rectangle::drawShape() const{
    drawShape(width, height);
}

void Rectangle::drawShape(int width, int height) const
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}

int main()
{
    Rectangle box(30,5);
    std::cout << "drawShape():" << std::endl;
    box.drawShape();
    std::cout << "\ndrawShape(40,2):" << std::endl;
    box.drawShape(40,2);
    return 0;
}