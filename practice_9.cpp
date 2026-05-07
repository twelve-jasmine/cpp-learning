//1元人民币拆分成1分、2分、5分的方法总数
#include <iostream>
using namespace std;
int main()
{
	int two, five;
	int count = 0;
	for (five = 0; five <= 20; five++) {
		for (two = 0; two <= (100 - five * 5) / 2; two++) {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}