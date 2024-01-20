#include <iostream>
#include <string>

using namespace std;

class employ
{
    int emp_id;
    string emp_name;
    int emp_salary;

public:
    void emp_set(int emp_id, string emp_name, int emp_salary)
    {
        this->emp_id = emp_id;
        this->emp_name = emp_name;
        this->emp_salary = emp_salary;
    }

    void emp_show()
    {
        cout << emp_id << ", name: " << emp_name << ", salary: " << emp_salary << endl;
    }
};

int main()
{

    employ em;

    em.emp_set(110, "Mafuz", 9500);
    em.emp_show();

    return 0;
}