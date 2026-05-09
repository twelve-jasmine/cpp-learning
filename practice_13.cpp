//1000以内的所有完数
#include <iostream>
using namespace std;
int main()
{
	int n, i;
	int sum = 0;
	for (n = 1; n <= 1000; n++) {
		for (i = 1; i < n; i++) {
			if (n % i == 0) sum += i;
		}
		if (sum == n) cout << n << endl;
		sum = 0;
	}

	return 0;
}