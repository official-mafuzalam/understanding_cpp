#include <iostream>
using namespace std;

class Fruit
{
private:
    string name;

public:
    void set_fruit(string name)
    {
        this->name = name;
    }

    void show_fruit()
    {
        cout << "Fruit name is: " << name << endl;
    }
};

class Orange : public Fruit
{
public:
};

int main()
{
    Orange ob;
    ob.set_fruit("Orange");
    ob.show_fruit();

    return 0;
}
