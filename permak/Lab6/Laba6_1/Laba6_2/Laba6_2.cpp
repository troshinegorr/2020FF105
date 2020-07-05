#include <iostream>

using namespace std;

int Factorial(int f) 
{
	int i = 1;
	int ans = 1;
	if (f > 0) 
	{
		for (; i <= f; i++) 
		{
			ans *= i;
		}
		return ans;
	}

	else 
	{
		return 1;
	}

}

int main() {
	int a;
	int s = 0;
	int j;
	cin >> a;
	for (j = 1; j <= a; j++)
		s = s + Factorial(j);
	cout << s << endl;
	return 0;
}