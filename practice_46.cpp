//用线性同余法生成伪随机数
#include <iostream>
using namespace std;
unsigned int random();
int main()
{
	int i;
	for (i = 1; i <= 100; i++) {
		cout << random();
		if (i % 10 == 0) cout << endl;
		else cout << '\t';
	}

	return 0;
}

unsigned int random()
{
	static unsigned int seed = 1;
	seed = (25173 * seed + 13849) % 65536;
	return seed;
}