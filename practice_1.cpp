//将三个数按照从小到大排序
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int t;
	cin >> a >> b >> c;
	a > b ? t = a, a = b, b = t : 0;
	a > c ? t = a, a = c, c = t : 0;
	b > c ? t = b, b = c, c = t : 0;
	cout << a << "<" << b << "<" << c << endl;

	return 0;
}