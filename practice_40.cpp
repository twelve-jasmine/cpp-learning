//函数重载的使用（不能既重载，又带有默认参数）（参数个数，参数类型，参数顺序三者至少有一个不同）
#include <iostream>
using namespace std;
int max(int x, int y);
int max(int x, int y, int z);
double max(double x, double y);
double max(double x, double y, double z);
int main()
{
	int a, b, c;
	char c1 = 'A';
	double x, y, z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	cout << max(a, b) << endl;
	cout << max(a, b, c) << endl;
	cout << max(x, y) << endl;
	cout << max(x, y, z) << endl;
	cout << max(0, a) << endl;
	cout << max(c1, b) << endl;         //内部转换类型
	cout << max(a, (int)x) << endl;     //强制转换类型
	return 0;
}
int max(int x, int y)
{
	return x > y ? x : y;
}
int max(int x, int y, int z)
{
	if (x < y) x = y;
	if (x < z) x = z;
	return x;
}
double max(double x, double y)
{
	return x > y ? x : y;
}
double max(double x, double y, double z)
{
	if (x < y) x = y;
	if (x < z) x = z;
	return x;
}