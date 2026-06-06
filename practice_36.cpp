//函数的递归调用（求n的阶乘）
#include <iostream>
using namespace std;
double fac(int n);
int main()
{
	int n;
	double result;
	cout << "Please input an integer:";
	cin >> n;
	result = fac(n);
	if (result != -1) {
		cout << n << "!=" << result << endl;
	}
	return 0;
}
double fac(int n)
{
	if (n < 0) {
		cout << "Data error!" << endl;
		return -1;
	}
	else if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fac(n - 1);
	}
}