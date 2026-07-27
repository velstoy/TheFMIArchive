#include <iostream>

const double PI = 3.14;

int main()
{
	double diameter;
	std::cin >> diameter;

	double radius = diameter / 2;

	double area = radius * radius * PI;

	double perimeter = diameter * PI;

	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;
}