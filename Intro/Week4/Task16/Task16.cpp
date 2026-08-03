#include <iostream>

constexpr double EPSILON = 0.000001;

int absoluteValue(int number)
{
	return number < 0 ? -number : number;
}

double mySqrt(double number, double epsilon = 0.000001)
{
	if (number <= 0 || epsilon <= 0)
	{
		return -1;
	}

	double guess = number / 2;
	double nextGuess = (guess + number / guess) / 2;

	int itr = 0;
	int maxItr = 10000;

	while (guess - nextGuess > epsilon && itr < maxItr)
	{
		guess = nextGuess;
		nextGuess = (guess + number / guess) / 2;

		itr++;
	}

	return nextGuess;
}

int power(int base, unsigned int exponent)
{
	int res = 1;

	for (unsigned int i = 0; i < exponent; i++)
	{
		res *= base;
	}

	return res;
}

double getPerimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double side1 = mySqrt(power(x2 - x1, 2) + power(y2 - y1, 2));
	double side2 = mySqrt(power(x3 - x1, 2) + power(y3 - y1, 2));
	double side3 = mySqrt(power(x3 - x2, 2) + power(y3 - y2, 2));

	double perimeter = side1 + side2 + side3;

	return perimeter;
}

double getArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double side1 = mySqrt(power(x2 - x1, 2) + power(y2 - y1, 2));
	double side2 = mySqrt(power(x3 - x1, 2) + power(y3 - y1, 2));
	double side3 = mySqrt(power(x3 - x2, 2) + power(y3 - y2, 2));

	double halfP = getPerimeter(x1, y1, x2, y2, x3, y3) / 2;

	double area = mySqrt(halfP * (halfP - side1) * (halfP - side2) * (halfP - side3));

	return area;
}

double isInCircleWithRadius(int x1, int y1, int x2, int y2, int x3, int y3, double r)
{
	double side1 = mySqrt(power(x2 - x1, 2) + power(y2 - y1, 2));
	double side2 = mySqrt(power(x3 - x1, 2) + power(y3 - y1, 2));
	double side3 = mySqrt(power(x3 - x2, 2) + power(y3 - y2, 2));

	if (absoluteValue(getArea(x1, y1, x2, y2, x3, y3) - side1 * side2 * side3 / (4 * r)) < EPSILON)
	{
		return true;
	}

	return false;
}

int main()
{

}