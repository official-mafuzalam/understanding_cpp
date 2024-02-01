#include <iostream>

class Triangle
{
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    friend void show_area(const Triangle &); // Declaring the non-member function as a friend
};

// Non-member function definition
void show_area(const Triangle &t)
{
    float area = 0.5 * t.base * t.height;
    std::cout << "Area of the triangle is: " << area << std::endl;
}

int main()
{
    // Create a Triangle object
    Triangle triangle(5.0, 3.0);

    // Call the non-member function to calculate and display the area
    show_area(triangle);

    return 0;
}
