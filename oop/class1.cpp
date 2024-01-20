#include <iostream>
#include <string>
using namespace std;

class Flower
{
public:
    int id;
    string name;
    string colour;
};

int main()
{
    Flower fl;

    fl.id = 1;
    fl.name = "Rose";
    fl.colour = "Red";

    cout << fl.id;

    return 0;
}
