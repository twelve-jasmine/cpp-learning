//汉诺塔问题
#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c);
int main()
{
	int n;
	cout << "Please input the number of disks to be move:";
	cin >> n;
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1) {
		cout << "Move disk" << n << ": " << a << " -> " << c << endl;
	}
	else {
		hanoi(n - 1, a, c, b);
		cout << "Move disk " << n << ": " << a << " -> " << c << endl;
		hanoi(n - 1, b, a, c);
	}
}