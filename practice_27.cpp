//小于5000的数中，能被11整除且各位和为13的数
#include <iostream>
using namespace std;
int sumDigits(int i);
int main()
{
	int i = 1, count = 0;
	for (i = 1; i <= 5000; i++) {
		if (i % 11 == 0 && sumDigits(i) == 13) {
			cout << i << ' ';
			count++;
		}
	}
	cout << endl << count << endl;

	return 0;
}

int sumDigits(int i)
{
	int sum = 0;
	while (i != 0) {
		sum += i % 10;
		i /= 10;
	}

	return sum;
}