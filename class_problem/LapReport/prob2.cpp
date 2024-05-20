#include <iostream>
using namespace std;

class area
{
private:
    double height;
    double width;

public:
    area(double h, double w) : height(h), width(w) {}

    double getHeight()
    {
        return height;
    }

    double getWidth()
    {
        return width;
    }

    virtual void show_area() = 0; // Pure virtual function
};

class rectangle : public area
{
public:
    rectangle(double h, double w) : area(h, w) {}

    void show_area() override
    {
        double area = getHeight() * getWidth();
        cout << "Rectangle area: " << area << endl;
    }
};

class triangle : public area
{
public:
    triangle(double h, double w) : area(h, w) {}

    void show_area() override
    {
        double area = 0.5 * getHeight() * getWidth();
        cout << "Triangle area: " << area << endl;
    }
};

int main()
{
    area *a;

    rectangle rect(10, 5);
    triangle tri(10, 5);

    a = &rect;
    a->show_area(); // Should display the area of the rectangle

    a = &tri;
    a->show_area(); // Should display the area of the triangle

    return 0;
}
