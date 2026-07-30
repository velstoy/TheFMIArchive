#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	double D = b * b - 4 * a * c;

	double x1 = (-b + sqrt(D)) / (2 * a);
	double x2 = (-b - sqrt(D)) / (2 * a);

	std::cout << "x1: " << x1 << std::endl;
	std::cout << "x2: " << x2 << std::endl;
}