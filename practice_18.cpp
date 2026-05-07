//´òÓ¡n½×Ä§·½Õó
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int mod(int i, int n);
int main()
{
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	int i, j;
	int row = 0, col = (n - 1) / 2;
	for (i = 1; i <= n * n; i++) {
		a[row][col] = i;
		if (a[mod(row - 1, n)][mod(col + 1, n)] != 0 || (row == 0 && col == n - 1)) {
			row = mod(row + 1, n);
		}
		else {
			row = mod(row - 1, n);
			col = mod(col + 1, n);
		}
	}
	for (row = 0; row < n; row++) {
		for (col = 0; col < n; col++) {
			cout << setw(3) << a[row][col] << ' ';
		}
		cout << endl;
	}

	return 0;
}

int mod(int i, int n)
{
	if (i % n >= 0) {
		return i % n;
	}
	else return i % n + n;
}