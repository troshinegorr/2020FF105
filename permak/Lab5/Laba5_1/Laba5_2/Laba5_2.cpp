#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>

std::vector<std::pair<long long, long long>> decomp(int ways)

{
	std::vector<std::pair<long long, long long>> sums;
	for (long long n = 0; n++ != INT64_MAX; )
	{
		int way = 0;
		sums.clear();
		for (long long a = cbrtl(n / 2.0); a >= 1; a--)
		{
			long long b = cbrtl(n - a * a * a);
			if (a * a * a + b * b * b == n)
			{
				sums.push_back(std::make_pair(a, b));
				if (++way == ways)
					return sums;
			}

		}

	}
	sums.clear();
	return sums;
}

int main()
{
	for (int ways = 1; ways < 10; ways++)
	{
		auto sums = decomp(ways);
		if (sums.empty())
			std::cout << "There is no natural numbers that can be represented in " << ways << " ways" << std::endl << std::endl;
		else
		{
			long long n = sums[0].first * sums[0].first * sums[0].first + sums[0].second * sums[0].second * sums[0].second;
			for (auto s : sums)
				std::cout << "\t" << n << " = " << s.first << "^3 + " << s.second << "^3" << std::endl;
			std::cout << std::endl;
		}

	}
	std::cin.get();
}