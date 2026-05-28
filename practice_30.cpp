//求n！末尾的0的个数
#include <iostream>
using namespace std;
int main()
{
	int n;
	int count = 0;
	int i = 0, j = 0;
	cin >> n;
	for (i = 5; i <= n; i += 5) {
		j = i;
		while (j % 5 == 0 && j != 0) {
			count++;
			j /= 5;
		}
	}
	cout << count << endl;

	return 0;
}