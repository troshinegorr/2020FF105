#include <iostream>

using namespace std;

int main()
{
	int n, k;
	int a[100][100] = { 0 };
	cin >> n;
	k = n;
	for (int i = 1; i <= n; ++i)
		a[i][i] = i;
	for (int i = 1; i <= n; ++i)
	{
		a[i][n - i + 1] = k;
		k--;
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << endl;
		for (int j = 1; j <= n; ++j)
			cout << a[i][j] << " ";
	}