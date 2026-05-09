//Josephus问题
#include <iostream>
using namespace std;

typedef struct Node {
	int n;
	struct Node* next;
}*lpNode;

int main()
{
	int num, m;            //num为总人数，m为指定数
	int i, j = 0;              //i，j用来循环
	int sum = 0;           //sum为淘汰的人数
	cin >> num >> m;
	lpNode head = new Node;
	lpNode cur = head;
	for (i = 1; i < num; i++) {
		cur->n = i;
		cur->next = new Node;
		cur = cur->next;
	}
	cur->n = num;
	cur->next = head;

	cur = head;
	while (sum != num - 1) {
		if (cur->n != 0) {
			j++;
		}
		if (j % m == 0 && cur->n != 0) {
			cout << cur->n << "号淘汰" << endl;
			cur->n = 0;
			sum++;
		}
		cur = cur->next;
	}
	while (cur->n == 0) {
		cur = cur->next;
	}
	cout << cur->n << "号获胜" << endl;

	cur = head->next;
	lpNode next = nullptr;
	while (cur != head) {
		next = cur->next;
		delete cur;
		cur = next;
	}
	delete head;

	return 0;
}