//找出所有的三位数的水仙花数
#include <iostream>
using namespace std;
int main()
{
	int num;
	int n1, n2, n3;
	for (num = 100; num <= 999; num++){
		n1 = num / 100;
		n2 = num % 100 / 10;
		n3 = num % 10;
		if (n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3 == num) {
			cout << num << endl;

		}
	}
	
	return 0;
}