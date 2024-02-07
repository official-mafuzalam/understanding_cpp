#include <iostream>

using namespace std;

class Fruit;
class Flower
{
    int id, price;
    string name;

public:
    Flower()
    {
        cout << "Hello \n";
    }

    Flower(int num)
    {
        cout << num << "\n";
    }
};

class Fruit{
    
};

int main()
{
    Flower fl;
    Flower fl1(2);

    return 0;
}
