//对百分制成绩进行评级
#include <iostream>
using namespace std;
int main()
{
	int grade;
	cin >> grade;
	switch (grade / 10) {
	case 10 :
	case 9 :cout << 'A' << endl; break;
	case 8 :cout << 'B' << endl; break;
	case 7 :cout << 'C' << endl; break;
	case 6 :cout << 'D' << endl; break;
	default :cout << 'E' << endl;
	}

	return 0;
}