//华氏温度转化为摄氏温度
#include <iostream>
using namespace std;
int main()
{
	int nFtemp;
	int nCtemp;
	cin >> nFtemp;
	nCtemp = (nFtemp - 32) > 0 ? (5.0 / 9 * (nFtemp - 32) + 0.5) : (5.0 / 9 * (nFtemp - 32) - 0.5);
	cout << nCtemp << endl;

	return 0;
}