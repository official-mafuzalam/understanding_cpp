#include <iostream>

using namespace std;

class Rect2;
class Rect1
{
    int hight, width;

public:
    Rect1(int h, int w)
    {
        hight = h;
        width = w;
    }

    friend void compare(Rect1 rt1, Rect2 rt2);
};

class Rect2
{
    int hight, width;

public:
    Rect2(int h, int w)
    {
        hight = h;
        width = w;
    }

    friend void compare(Rect1 rt1, Rect2 rt2);
};

int main()
{
    Rect1 rt(6, 6);
    Rect2 rt2(6, 6);

    compare(rt, rt2);

    return 0;
}

void compare(Rect1 rt1, Rect2 rt2)
{
    if (rt1.hight * rt1.width > rt2.hight * rt2.width)
    {
        cout << "First rectangle is getter than 2nd. \n";
    }
    else if (rt1.hight * rt1.width < rt2.hight * rt2.width)
    {
        cout << "2nd rectangle is getter than 1st. \n";
    }
    else
    {
        cout << "Both are same \n";
    }
}
