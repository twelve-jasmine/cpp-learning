//函数默认参数的使用
#include <iostream>
using namespace std;
const int num_1 = 10;
const int num_2 = 20;
int max(int i = num_1, int j = num_2);
int add(int a = 5, int b = max());
int main()
{
	cout << "Calling max(5, 8),result is " << max(5, 8) << endl;
	cout << "Calling max(5),result is " << max(5) << endl;
	cout << "Calling max(),result is " << max() << endl;
	cout << "Calling add(5, 8),result is " << add(5, 8) << endl;
	cout << "Calling add(8),result is " << add(8) << endl;
	cout << "Calling add(),result is " << add() << endl;

	return 0;
}

int max(int x, int y)
{
	return x > y ? x : y;
}

int add(int x, int y)
{
	return x + y;
}