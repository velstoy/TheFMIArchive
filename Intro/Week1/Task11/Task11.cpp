#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	if ((c < a || c > b) && (d < a || d > b))
	{
		std::cout << 0 << std::endl;
	}
	else if (c >= a && c <= b && d >= a && d <= b)
	{
		std::cout << 2 << std::endl;
	}
	else
	{
		std::cout << 1 << std::endl;
	}
}