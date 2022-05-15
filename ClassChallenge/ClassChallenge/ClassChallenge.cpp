#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Shape
{
public:
    string color;

    int getArea()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
public:
    int height;
    int width;

    int getArea(int height, int width)
    {
        return height * width;
    }
};

class Triange : public Shape
{
public: 
    double base;
    double height;

    double getArea(double base, double height)
    {
        return (.5 * (base * height));
    }
};

class Circle : public Shape
{
public:
    double radius;

    double getArea()
    {
        return (3.14 * pow(radius, 2));
    }
};

int main()
{
    std::cout << "Hello World!\n";
}