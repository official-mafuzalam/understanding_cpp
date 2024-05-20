#include <iostream>
using namespace std;

class grandfather
{
private:
    string name;
    int age;

public:
    grandfather(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

class father : public grandfather
{
private:
    string name;
    int age;

public:
    father(string grandName, int grandAge, string name, int age) : grandfather(grandName, grandAge)
    {
        this->name = name;
        this->age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

class son : public father
{
private:
    string name;
    int age;

public:
    son(string grandName, int grandAge, string fatherName, int fatherAge, string name, int age)
        : father(grandName, grandAge, fatherName, fatherAge)
    {
        this->name = name;
        this->age = age;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void showAllInfo()
    {
        cout << "Grandfather's Name: " << grandfather::getName() << ", Age: " << grandfather::getAge() << endl;
        cout << "Father's Name: " << father::getName() << ", Age: " << father::getAge() << endl;
        cout << "Son's Name: " << getName() << ", Age: " << getAge() << endl;
    }
};

int main()
{
    son s("GrandfatherName", 80, "FatherName", 50, "SonName", 20);
    s.showAllInfo();
    return 0;
}
