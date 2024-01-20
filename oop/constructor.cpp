#include <iostream>
#include <string>
using namespace std;

class MyConstructor
{
public:
    MyConstructor()
    {
        cout << "Hello world."<<endl;
    }

    MyConstructor(int num)
    {
        cout << num << endl;
    }
};

int main()
{
    MyConstructor mycons;
    MyConstructor mycons1(5);
    return 0;
}
