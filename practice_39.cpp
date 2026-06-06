//使用内联函数求圆的面积(必须在定义处inline，声明处写了没用)
#include <iostream>
using namespace std;
double CircleArea(double radius);
int main()
{
	double r, area;
	cout << "Please input radius of a circle:";
	cin >> r;
	area = CircleArea(r);
	cout << "The area is " << area << endl;
	return 0;
}
inline double CircleArea(double radius)
{
	return 3.1415926 * radius * radius;
}