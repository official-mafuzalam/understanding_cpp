#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    float fee;

    void input()
    {
        cout << "Enter student id: ";
        cin >> id;
        cout << "Enter fees amount: ";
        cin >> fee;
    }
};

int main()
{
    Student student[7];

    float total = 0.0;

    for (int i = 0; i < 7; i++)
    {
        student[i].input();
        total += student[i].fee;
    }

    cout << "Total fee of all students: " << total << endl;

    return 0;
}
