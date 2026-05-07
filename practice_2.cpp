//输入分数并返回该分数对应的等级
#include <iostream>
using namespace std;
int main()
{
	float grade;
	cin >> grade;
	if (grade >= 90) {
		cout << 'A';
	}
	else if (grade >= 80) {
		cout << 'B';
	}
	else if (grade >= 70) {
		cout << 'C';
	}
	else if (grade >= 60) {
		cout << 'D';
	}
	else {
		cout << 'E';
	}

	return 0;
}