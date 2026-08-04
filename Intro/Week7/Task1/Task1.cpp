#include <iostream>

constexpr size_t MAX_SIZE = 1024;

void arrayUnion(const int A[], size_t sizeA, const int B[], size_t sizeB, int C[], size_t& sizeC)
{
	sizeC = sizeA + sizeB;

	size_t j = 0, k = 0;

	for (size_t i = 0; i < sizeC; i++)
	{
		if (j < sizeA)
		{
			C[i] = A[j];
			j++;
			continue;
		}

		C[i] = B[k];
		k++;
	}
}

bool contains(const int arr[], size_t size, int el)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == el)
		{
			return true;
		}
	}

	return false;
}

void arrayIntersection(const int A[], size_t sizeA, const int B[], size_t sizeB, int C[], size_t& sizeC)
{
	sizeC = 0;

	for (size_t i = 0; i < sizeA; i++)
	{
		if (contains(B, sizeB, A[i]) && !contains(C, sizeC, A[i]))
		{
			C[sizeC++] = A[i];
		}
	}
}

void arrayDifference(const int A[], size_t sizeA, const int B[], size_t sizeB, int C[], size_t& sizeC)
{
	sizeC = 0;

	for (size_t i = 0; i < sizeA; i++)
	{
		if (!contains(B, sizeB, A[i]) && !contains(C, sizeC, A[i])) 
		{
			C[sizeC++] = A[i];
		}
	}
}

int main()
{
	size_t sizeA;
	std::cin >> sizeA;

	int A[MAX_SIZE];

	for (size_t i = 0; i < sizeA; i++)
	{
		std::cin >> A[i];
	}

	size_t sizeB;
	std::cin >> sizeB;

	int B[MAX_SIZE];

	for (size_t i = 0; i < sizeB; i++)
	{
		std::cin >> B[i];
	}

	int C[MAX_SIZE];
	size_t sizeC;

	//arrayUnion(A, sizeA, B, sizeB, C, sizeC);
	//arrayIntersection(A, sizeA, B, sizeB, C, sizeC);
	arrayDifference(A, sizeA, B, sizeB, C, sizeC);

	for (size_t i = 0; i < sizeC; i++)
	{
		std::cout << C[i] << " ";
	}

	std::cout << std::endl;
}