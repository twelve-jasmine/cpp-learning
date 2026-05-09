//求解任意三角形的面积
#include <iostream>
#include <cmath>
using namespace std;
const float eps = 1e-6;
int main()
{
	float a, b, c;
	float p;
	float s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	if (p - a <= eps || p - b <= eps || p - c <= eps) {
		cout << "No Triangle";
	}
	else {
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << s << endl;
	}

	return 0;
}