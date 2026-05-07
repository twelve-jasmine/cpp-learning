//通过函数将整数数组逆序
#include <iostream>
#include <vector>
using namespace std;
void reverse(int a[], int n);
int main()
{
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	reverse(a.data(), n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}

void reverse(int a[], int n)
{
	int temp;
	for (int i = 0; i < n / 2; i++) {
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}