#include <iostream>
#include <string>

using namespace std;

class fruit
{
    string f_name;
    string f_colour;

public:
    fruit(string f_name, string f_colour)
    {
        this->f_name = f_name;
        this->f_colour = f_colour;
    }

    void f_display()
    {
        cout << "Name: " << f_name << " and colour is: " << f_colour << endl;
    }
};

int main()
{

    fruit ft("Banana", "Yellow");
    ft.f_display();

    return 0;
}
