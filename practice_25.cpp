//输出Fibonacci数列前二十项
#include <iostream>
using namespace std;
int main()
{
	int i = 1, a = 1, b = 2;
	for (i = 1; i <= 10; i++) {
		cout << a << endl << b << endl;
		a = a + b;
		b = a + b;
	}

	return 0;
}