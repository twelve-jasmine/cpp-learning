//分糖果问题
#include <iostream>
using namespace std;
int AllEqual(int a[]);
void supply(int a[]);
void exchange(int a[]);
int main()
{
	int a[10] = { 0 };       //记录每个人的糖果
	int count = 0;                 //记录调整次数
	int i;
	for (i = 0; i < 10; i++) {
		cin >> a[i];
	}
	supply(a);
	while (AllEqual(a) != 1) {
		exchange(a);
		supply(a);
		count++;
	}
	cout << a[0] << endl << count << endl;

	return 0;
}

int AllEqual(int a[])
{
	for (int i = 1; i < 10; i++) {
		if (a[i] != a[0]) return 0;
	}
	return 1;
}

void supply(int a[])
{
	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 1) a[i]++;
	}
}

void exchange(int a[])
{
	int temp = a[0];
	for (int i = 0; i < 9; i++) {
		a[i] = (a[i] + a[i + 1]) / 2;
	}
	a[9] = (a[9] + temp) / 2;
}