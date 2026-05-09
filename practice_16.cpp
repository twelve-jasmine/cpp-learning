//用冒泡排序对10个整数按照从小到大排序
#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int i = 0, j = 0;
	int temp = 0;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}