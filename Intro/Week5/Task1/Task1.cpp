#include <iostream>

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	mySwap(a, b);

	std::cout << a << " " << b << std::endl;
}
