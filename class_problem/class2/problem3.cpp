#include <iostream>
#include <string>

using namespace std;

class GPA
{
    float gpa1;
    float gpa2;
    float gpa3;

public:
    float max = INT8_MIN;

    GPA(float gpa1, float gpa2, float gpa3)
    {
        this->gpa1 = gpa1;
        this->gpa2 = gpa2;
        this->gpa3 = gpa3;

        if (gpa1 > gpa2 && gpa1 > gpa3)
        {
            max = gpa1;
        }
        else if (gpa2 > gpa1 && gpa2 > gpa3)
        {
            max = gpa2;
        }
        else
        {
            max = gpa3;
        }
    }

    void print()
    {
        cout << "Max GPA is: " << max << endl;
    }
};

int main()
{
    GPA gpa(3.11, 2.81, 3.10);
    gpa.print();

    return 0;
}
