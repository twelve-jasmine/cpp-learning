//输入30名学生的5门课程成绩，输出每名学生的平均成绩
#include <iostream>
using namespace std;
int main()
{
	float grade[30][5] = { 0 };
	float average[30] = { 0 };
	int i = 0, j = 0;
	for (i = 0; i < 30; i++) {
		for (j = 0; j < 5; j++) {
			cin >> grade[i][j];
			average[i] += grade[i][j];
		}
		average[i] /= 5.0;
	}
	for (i = 0; i < 30; i++) {
		cout << average[i] << endl;
	}

	return 0;
}