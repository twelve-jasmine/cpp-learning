//计算π的近似值
#include <iostream>
using namespace std;
#define eps 1e-6
int main()
{
	int i = 1, sign = 1;
	double pi = 0, term = 1;
	while (term >= eps) {
		term = 1.0 / (2 * i - 1);
		pi += sign * term;
		sign *= -1;
		i++;
	}
	pi *= 4;
	cout << pi << endl;

	return 0;
}