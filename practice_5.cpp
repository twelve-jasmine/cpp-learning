//求三位数的逆序数
#include <iostream>
using namespace std;
int main()
{
	int num;
	int inv = 0;
	cin >> num;
	inv = num / 100 + num / 10 % 10 * 10 + num % 10 * 100;
	cout << inv << endl;

	return 0;
}