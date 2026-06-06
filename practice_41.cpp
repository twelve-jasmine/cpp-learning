//第二部分——集合论 Project1——多重集合
#include <iostream>
#include <map>
using namespace std;
using Multiset = map<string, int>;

Multiset inputMultiset(const string& prompt);
void printMultiset(const Multiset& ms);
Multiset Union(const Multiset& P, const Multiset& Q);
Multiset Intersection(const Multiset& P, const Multiset& Q);
Multiset Sum(const Multiset& P, const Multiset& Q);
Multiset Difference(const Multiset& P, const Multiset& Q, bool reverse = false);
int max(int a, int b);
int min(int a, int b);

int main()
{
	Multiset A, B;
	A = inputMultiset("请输入重集A：");
	B = inputMultiset("请输入重集B：");

	cout << "重集A为：" << endl;
	printMultiset(A);
	cout << "重集B为：" << endl;
	printMultiset(B);

	cout << "A∪B的结果为：" << endl;
	printMultiset(Union(A, B));	

	cout << "A∩B的结果为：" << endl;
	printMultiset(Intersection(A, B));

	cout << "A+B的结果为：" << endl;
	printMultiset(Sum(A, B));

	cout << "B-A的结果为：" << endl;
	printMultiset(Difference(A, B));

	cout << "A-B的结果为：" << endl;
	printMultiset(Difference(A, B, true));

	return 0;
}

//输入
Multiset inputMultiset(const string& prompt)
{
	Multiset ms;
	string key;
	int value;
	cout << prompt << endl;
	cout << "请输入元素及重数（例：a 3），输入end -1表示终止输入：" << endl;
	while (cin >> key >> value) {
		if (key == "end" && value == -1) {
			break;
		}
		ms[key] = value;
	}

	return ms;
}


//输出
void printMultiset(const Multiset& ms)
{
	cout << "{";
	bool first = true;
	for (const auto& kv : ms) {
		if (kv.second <= 0) continue;
		if (!first) {
			cout << ", ";
		}
		cout << kv.second << "·" << kv.first;
		first = false;
	}
	cout << "}" << endl;
}

//并运算
Multiset Union(const Multiset& P, const Multiset& Q)
{
	Multiset ms = P;
	for (const auto& kv : Q) {
		ms[kv.first] = max(ms[kv.first], kv.second);
	}

	return ms;
}

//交运算
Multiset Intersection(const Multiset& P, const Multiset& Q)
{
	Multiset ms;
	for (const auto& kv : Q) {
		if (P.find(kv.first) != P.end()) {
			auto it = P.find(kv.first);
			ms[kv.first] = min(it->second, kv.second);
		}
	}

	return ms;
}

//和运算
Multiset Sum(const Multiset& P, const Multiset& Q)
{
	Multiset ms = P;
	for (const auto& kv : Q) {
		ms[kv.first] += kv.second;
	}

	return ms;
}

//差运算
Multiset Difference(const Multiset& P, const Multiset& Q, bool reverse)
{
	
	if (reverse) {
		Multiset ms = Q;
		for (const auto& kv : P) {
			ms[kv.first] -= kv.second;
		}

		return ms;
	}

	else {
		Multiset ms = P;
		for (const auto& kv : Q) {
			ms[kv.first] -= kv.second;
		}

		return ms;
	}
}

//工具函数max与min
int max(int a, int b)
{
	return (a > b ? a : b);
}

int min(int a, int b)
{
	return (a < b ? a : b);
}