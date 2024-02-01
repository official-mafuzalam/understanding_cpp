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
        cout << "Area is: " << 3.1416 * (radius * radius)<<"\n";
    }
};

int main()
{
    Ball football(38), tennisball;

    football.show();
    tennisball.show();

    return 0;
}
