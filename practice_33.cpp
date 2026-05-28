//找出固定二维数组的鞍点（行最大、列最小）（一个二维数组鞍点数量为0或1）
#include <iostream>
using namespace std;
#define M 5
#define N 4
int IsRowMax(int num, int* pRow);
int IsColMin(int num, int* pCol);
int main()
{
	int a[M][N], row = 0, col = 0;
	bool flag = false;
	for (row = 0; row < M; row++) {
		for (col = 0; col < N; col++) {
			cin >> a[row][col];
		}
	}
	for (row = 0; row < M; row++) {
		for (col = 0; col < N; col++) {
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	for (row = 0; row < M && !flag; row++) {
		for (col = 0; col < N && !flag; col++) {
			if (flag = IsRowMax(a[row][col], a[row]) && IsColMin(a[row][col], &a[row][col])) {
				cout << "该二维数组的鞍点是" << a[row][col] << endl;
			}
		}
	}
	if (!flag) {
		cout << "该二维数组没有鞍点" << endl;
	}
	return 0;
}

int IsRowMax(int num, int* pRow)
{
	for (int i = 0; i < N; i++) {
		if (num < pRow[i]) {
			return 0;
		}
	}
	return 1;
}

int IsColMin(int num, int* pCol)
{
	for (int i = 0; i < M; i++, pCol += N) {
		if (num > *pCol) {
			return 0;
		}
	}
	return 1;
}