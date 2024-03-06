#include <iostream>

using namespace std;

class Structure
{
    int side, height, width;
    double radius;

public:
    Structure(int height)
    {
        this->height = height;
        cout << "Area of Square is: " << height * height;
    }

    Structure(int height, int width)
    {
        this->height = height;
        this->width = width;

        cout << "\nArea of Rectangle is: " << height * width;
    }

    Structure(double radius)
    {
        this->radius = radius;
        cout << "\nArea of Rectangle is: " << 3.1416 * (radius * radius);
    }
};

int main()
{
    Structure square(10), rectangle(10, 6), radius(2.6);
    return 0;
}
