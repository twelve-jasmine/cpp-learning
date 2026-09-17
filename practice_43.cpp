//局部变量和全局变量（extern说明的使用），以找出10个整数的最大值与最小值为例
#include <iostream>
using namespace std;
int MAX, MIN;              //全局变量
void maxmin(int a[], int n);
int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
	}
	maxmin(a, 10);
	cout << "Max = " << MAX << endl;
	cout << "Min = " << MIN << endl;

	return 0;
}

void maxmin(int a[], int n)
{
	MAX = MIN = a[0];
	for (int i = 0; i < n; i++) {
		if (MAX < a[i]) MAX = a[i];
		if (MIN > a[i]) MIN = a[i];
	}
}