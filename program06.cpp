#include <iostream>
using namespace std;

class Circle
{
private:
const float PI;
float radius,area;

public:
Circle() : PI(3.14)
{
}
void input()
{
cout << "Enter the radius : "; cin >> radius;
}
void display()
{
area = PI*radius*radius; cout << "Area of Circle = " << area;
}
};
int main()
{
Circle c;
c.input();
c.display();
raturn 0;
}
