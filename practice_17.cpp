//输入三个字符串，将它们按从小到大的顺序排列输出
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b, c, temp;
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << endl << b << endl << c << endl;

	return 0;
}