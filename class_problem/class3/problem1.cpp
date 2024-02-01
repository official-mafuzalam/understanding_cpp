#include <iostream>

using namespace std;

class Ball
{
    int radius;

public:
    Ball() { radius = 28; }

    Ball(int radius)
    {
        this->radius = radius;
    }

    void show()
    {
        cout << "Area is: " << 3.1416 * (radius * radius);
    }
};

int main()
{

    return 0;
}
