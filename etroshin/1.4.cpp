#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x:";
	cin >> x;
	cout << "Enter y:";
	cin >> y;

	if (((x < -2) or (x > 2)) or ((y < -1) or (y > 2)))
	{
		cout << "false";
		return 1;
	}
	if (((x >= -2) and (x <= -1)) and ((y >= 0) and (y <= 2)))
	{
		cout << "true";
		return 2;
	}
	if ((x > -1) and (x <= 0))
		if (((y >= 1) and (y <= 2)) or ((y <= 0) and (y >= -x - 1)))
		{
			cout << "true";
			return 3;
		}
		else
		{
			cout << "false";
			return 4;
		}
	if ((x > 0) and (x < 1))
		if (((y >= 1) and (y <= 2)) or ((y <= 0) and (y >= x - 1)))
		{
			cout << "true";
			return 5;
		}
		else
		{
			cout << "false";
			return 6;
		}
	if (((x >= 1) and (x <= 2)) and ((y >= 0) and (y <= 2))) cout << "true";
	return 0;
}