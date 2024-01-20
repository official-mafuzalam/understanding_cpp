#include <iostream>
#include <string>
using namespace std;

class MyMethod
{
public:
    void Print(string text)
    {
        cout << text << endl;
    }
};

int main()
{

    MyMethod mymd;

    mymd.Print("Hello world.");

    return 0;
}
