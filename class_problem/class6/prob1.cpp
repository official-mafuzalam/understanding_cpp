#include <iostream>
using namespace std;

class father
{
private:
    string name;
    int age;

public:
    father(string name, int age)
    {
        this->name = name;
        this->age = age;
    };
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class son : public father
{
private:
    string name1;
    int age1;

public:
    son(string name, int age, string name1, int age1) : father(name, age)
    {
        this->name1 = name1;
        this->age1 = age1;
    };

    void show1()
    {
        cout << "Son Name: " << name1 << endl;
        cout << "Son Age: " << age1 << endl;
        show();
    }
};

int main()
{
    son ob("Mafuz", 60, "Laden", 25);
    ob.show1();
    return 0;
}
