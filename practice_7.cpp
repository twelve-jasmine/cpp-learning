//求任意数的逆序数
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num;
	int digit = 0;
	cin >> num;
	do {
		digit = num % 10;
		num = num / 10;
		cout << digit;
	} while (num > 0);
	cout << '\n';

	return 0;
}