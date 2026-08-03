#include <iostream>

int myMax(int a, int b)
{
	return a > b ? a : b;
}

int myMin(int a, int b)
{
	return a < b ? a : b;
}

void sort3(int& min, int& mid, int& max)
{
	int tempMin = myMin(min, myMin(mid, max));
	int tempMax = myMax(min, myMax(mid, max));
	int tempMid = myMax(myMin(min, myMax(mid, max)), myMin(mid, max));

	min = tempMin;
	max = tempMax;
	mid = tempMid;
}

int main()
{
	int first, second, third;
	std::cin >> first >> second >> third;

	sort3(first, second, third);

	std::cout << first << " " << second << " " << third << std::endl;
}