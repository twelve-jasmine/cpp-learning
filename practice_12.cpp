//求一元二次方程的实数根
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b, c;
	float x1, x2;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c >= 0) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << x1 << endl << x2 << endl;
	}
	else {
		cout << "该方程无实数根" << endl;
	}

	return 0;
}