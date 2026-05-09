//打印九九乘法表
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 1, j = 1;
	cout << left;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			cout << i << '*' << j << '=' << setw(4) << i * j << "  ";
		}
		cout << endl;
	}

	return 0;
}