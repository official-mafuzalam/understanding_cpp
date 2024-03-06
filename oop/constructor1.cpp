#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    int id;
    string name;

    Car(int i, string n);
};

// Constructor definition outside the class
Car::Car(int i, string n)
{
    id = i;
    name = n;
}

int main()
{
    Car carObj(10, "Volvo");

    cout << carObj.id << ", " << carObj.name << endl;

    return 0;
}
