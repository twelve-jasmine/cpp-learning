//从5白、3黄、6黑中取出8个，且必须含有白的方案数
#include <iostream>
using namespace std;
int main()
{
	int w = 0, y = 0, b = 0;
	int count = 0;
	for (w = 1; w <= 5; w++) {
		for (y = 0; y <= 3 && w + y <= 8; y++) {
			if ((b = 8 - w - y) >= 0 && b <= 6) {
				cout << "白球：" << w << "  黄球：" << y << "  黑球：" << b << endl;
				count++;
			}
		}
	}
	cout << "总方法数：" << count << endl;

	return 0;
}