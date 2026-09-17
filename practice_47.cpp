//在源程序后面定义全局变量
#include <iostream>
using namespace std;
int max(int, int);
int main()
{
	int c;
	extern int a, b;
	c = max(a, b);
	cout << "max = " << c << endl;

	return 0;
}

int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return z;
}

int a = 13, b = 4;