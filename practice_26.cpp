//输入10位评委的打分，求出最大值、最小值、平均分
#include <iostream>
using namespace std;
int main()
{
	int grade[10] = { 0 };
	int min = 0, max = 0;
	double average = 0;
	for (int i = 0; i < 10; i++) {
		cin >> grade[i];
	}
	min = max = grade[0];
	for (int i = 0; i < 10; i++) {
		if (grade[i] < min) {
			min = grade[i];
		}
		if (grade[i] > max) {
			max = grade[i];
		}
		average += grade[i];
	}
	average /= 10;
	cout << "min:" << min << endl << "max:" << max << endl << "average:" << average << endl;

	return 0;
}