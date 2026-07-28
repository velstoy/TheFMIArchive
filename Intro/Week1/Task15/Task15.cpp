#include<iostream>

int main()
{
	size_t creditCard;
	std::cin >> creditCard;

	std::cout << "XXXXXXXXXXXX" << creditCard % 10000 << std::endl;
}