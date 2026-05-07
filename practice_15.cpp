//直接选择排序对10个数按照从小到大进行排序
#include <iostream>
using namespace std;
int main()
{
	int a[10] = { 0 };
	int i = 0, j = 0, temp = 0;
	int min = 0;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
	}
	for (i = 0; i < 10; i++) {
		min = a[i];
		temp = i;
		for (j = i; j < 10; j++) {
			if (a[j] < min) {
				min = a[j];
				temp = j;
			}
		}
		a[temp] = a[i];
		a[i] = min;
		cout << a[i] << ' ';
	}

	return 0;
}