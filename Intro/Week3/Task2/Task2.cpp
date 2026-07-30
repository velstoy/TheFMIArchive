#include <iostream>

int main()
{
	double num1, num2;
	char op;

	std::cin >> num1 >> op >> num2;

	double res = 0;
	bool validResult = true;

	switch (op)
	{
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		if (num2 != 0)
		{
			res = num1 / num2;
			break;
		}
		validResult = false;
		std::cout << "Error! You cannot divide by 0!" << std::endl;
		break;
	default:
		validResult = false;
		std::cout << "Error! Invalid operation!" << std::endl;
		break;
	}

	if (validResult)
	{
		std::cout << res << std::endl;
	}
}