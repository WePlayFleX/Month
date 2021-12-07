#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	cout << "Enter the month number" << endl;
	cin >> a;
	if ((a <= 2) && (a >= 1) && (a == 12))
	{
		cout << "Winter" << endl;
	}
	else if ((a >= 3) && (a <= 5))
	{
		cout << "Spring" << endl;
	}
	else if ((a >= 6) && (a <= 8))
	{
		cout << "Summer" << endl;
	}
	else if ((a >= 9) && (a <= 11))
	{
		cout << "Autumn" << endl;
	}
	system("pause");
	return 0;
}