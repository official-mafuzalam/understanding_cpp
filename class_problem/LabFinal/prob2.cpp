#include <iostream>
using namespace std;

class LabFinal
{
    int num1, num2;

public:
    LabFinal() {}
    LabFinal(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    void show()
    {
    }

    friend LabFinal operator+(LabFinal ob1, LabFinal ob2);
    friend bool operator>(LabFinal ob1, LabFinal ob2);
};

LabFinal operator+(LabFinal ob1, LabFinal ob2)
{
    return LabFinal(ob1.num1 + ob2.num1, ob1.num2 + ob2.num2);
}

bool operator>(LabFinal ob1, LabFinal ob2)
{
    return (ob1.num1 > ob2.num1, ob1.num2 > ob2.num2);
}

int main()
{
    LabFinal e1(10, 20), e2(50, 20), e3(20, 100), e4;

    e4 = e1 + e2;

    if (e3 > e4)
    {
        cout << "e3 is greater";
    }
    else
    {
        cout << "e4 is greater";
    }

    return 0;
}
