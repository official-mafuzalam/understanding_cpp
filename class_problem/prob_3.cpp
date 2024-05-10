#include <iostream>

using namespace std;

class Square
{
    int area;

public:
    Square() {}
    Square(int area)
    {
        this->area = area;
    }
    int operator<(Square sq)
    {
        return area < sq.area;
    }

    int operator==(Square sq)
    {
        return area == sq.area;
    }
};

int main()
{
    Square s1(200), s2(200);

    if (s1 < s2)
    {
        cout << "S2 is greater";
    }
    else if (s1 == s2)
    {
        cout << "Equal";
    }
    else
    {
        cout << "S1 is greater";
    }

    return 0;
}
