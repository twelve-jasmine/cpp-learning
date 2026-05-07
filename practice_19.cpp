//´òÓ¡Ñî»ÔÈý½Ç
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	int i = 0, j = 0, k = 0;
	cin >> n;
	vector <int> a(n, 1);
	vector <int> b(n, 1);
	for (i = 0; i < n; i++) {
		cout << string(n - 1 - i, ' ');
		for (k = 1; k < i; k++) {
			a[k] = b[k - 1] + b[k];
		}
		for (j = 0; j <= i; j++) {
			cout << a[j] << ' ';
		}
		cout << endl;
		b = a;
	}

	return 0;
}