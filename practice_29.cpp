//求100~200内的所有质数
#include <iostream>
using namespace std;
int isPrime(int n);
int main()
{
	for (int i = 100; i <= 200; i++) {
		if (isPrime(i) == 1) {
			cout << i << ' ';
		}
	}
	cout << endl;

	return 0;
}

int isPrime(int n)
{
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}