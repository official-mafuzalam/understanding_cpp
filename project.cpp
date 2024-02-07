#include <iostream>

using namespace std;

class Project
{
    string name;
    int price;

public:
    Project()
    {
    }
    Project(string name, int price)
    {
        this->name = name;
        this->price = price;
    }

    void show(string text)
    {
        cout << text << "\n";
    }
};

int main()
{
    int choice;

    Project pj;
    pj.show("Hello");


    return 0;
}
