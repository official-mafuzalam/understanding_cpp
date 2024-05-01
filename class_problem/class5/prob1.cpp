#include <iostream>

using namespace std;

class Fruite
{
    string color;

public:
    void set(string color)
    {
        this->color = color;
    }

    void show()
    {
        cout << color << endl;
    }
};

class Mango : public Fruite
{
public:
};

int main()
{
    Mango ob;

    ob.set("Yellow");
    ob.show();

    return 0;
}
