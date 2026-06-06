//求斐波那契数列的第n项
#include <iostream>
using namespace std;
int fib(int n);
int main()
{
	int n;
	int result;
	cin >> n;
	result = fib(n);
	if (result != -1) {
		cout << "斐波那契数列的第n项是：" << result << endl;
	}
	return 0;
}
int fib(int n)
{
	if (n <= 0) {
		return -1;
	}
	else if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}