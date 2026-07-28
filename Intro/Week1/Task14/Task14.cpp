#include <iostream>

constexpr double EPSILON = 0.0000001;

int main()
{
	int num1, num2, num3, num4;
	std::cin >> num1 >> num2 >> num3 >> num4;

	double multiplier = num2 / (double)num1;

	std::cout << ((num2 * multiplier - num3 < EPSILON) && (num3 * multiplier - num4 < EPSILON)) << std::endl;
}