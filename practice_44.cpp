//局部变量的使用（注意覆盖关系）
#include <iostream>
using namespace std;
int x = 5;             //全局变量
void f1(void);
void f2(void);
void f3(int x);
int main()
{
	int x;
	x = 3;              //局部变量x = 3
	f1();
	f2();
	f3(x);
	cout << "x = " << x << endl;

	return 0;
}

void f1(void)
{
	cout << "x = " << x << endl;        //全局变量
	{
		for (int x = 1; x <= 2; x++) cout << "x = " << x << endl;      //局部变量
	}
	x = x + 1;        //全局变量
}

void f2(void)
{
	cout << "x = " << x << endl;    //全局变量
}

void f3(int x)
{
	x++;                //局部变量
	cout << "x = " << x << endl;
}