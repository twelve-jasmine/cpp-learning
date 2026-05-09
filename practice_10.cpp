//600!能被9的最高多少次方整除
#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	int count = 0;
	int num;
	for (i = 1; i <= 600; i++) {
		num = i;
		while (num % 3 == 0) {
			count++;
			num /= 3;
		}
	}
	cout << count / 2 << endl;

	return 0;
}