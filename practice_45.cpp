//自动变量与静态变量的使用
#include <iostream>
using namespace std;
int f(int);
int main()
{
	cout << "After the first calling, f(3) = " << f(3) << endl;
	cout << "After the second calling, f(3) = " << f(3) << endl;
	cout << "After the third calling, f(3) = " << f(3) << endl;

	return 0;
}

int f(int x)
{
	int y = 1;          //定义自动变量
	static int z = 2;   //定义静态变量
	y++;
	z++;
	return x + y + z;
}