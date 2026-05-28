//判断3 * 4矩阵中的最大值
#include <iostream>
using namespace std;
int main()
{
	int row = 0, col = 0;
	int a[3][4] = { 0 };
	int max = 0;
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 4; col++) {
			cin >> a[row][col];
		}
	}
	max = a[0][0];
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 4; col++) {
			if (a[row][col] > max) {
				max = a[row][col];
			}
		}
	}
	cout << max << endl;

	return 0;
}