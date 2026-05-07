//输入一段英文（以“$”标志文章结束），统计其中元音字母个数
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int i = 0, count = 0;
	getline(cin, a);
	while (a[i] != '$') {
		switch (a[i]) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':count++; break;
		}
		i++;
	}
	cout << count << endl;

	return 0;
}