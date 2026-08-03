#include <iostream>

void addTime(int& h, int& m, int l)
{
	h += l / 60;
	m += l % 60;

	while (m > 60)
	{
		m -= 60;
		h++;
	}
}

void getMaxTime(int& maxH, int& maxM, int h, int m)
{
	if (maxH < h || (maxH == h && maxM < m))
	{
		maxH = h;
		maxM = m;
	}
}

int main()
{
	int n;
	std::cin >> n;

	int maxH = 0, maxM = 0;

	for (int i = 0; i < n; i++)
	{
		int h, m, l;
		std::cin >> h >> m >> l;

		addTime(h, m, l);

		if (i == 0)
		{
			maxH = h;
			maxM = m;
			continue;
		}

		getMaxTime(maxH, maxM, h, m);
	}

	std::cout << maxH << " " << maxM << std::endl;
}