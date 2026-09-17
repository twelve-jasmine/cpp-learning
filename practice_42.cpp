//各种数据的内存分配示例
#include <iostream>
using namespace std;
int nGlobal = 100;          //全局变量
int main()
{
	static int nLocalStatic = 100;             //静态变量
	int nLocal = 10;                           //局部变量
	const int nLocalConst = 20;                //局部常量
	char localArray[16] = "LocalArray";        //局部数组
	//char* pLocalString1 = "Beijing China";     //指向字符串常量的指针变量
	const char* pLocalString2 = "Wuhan Hubei"; //指向字符串常量的指针变量
	int* pNew = new int[32];                   //new动态申请
	char* pMalloc = (char*)malloc(sizeof(char) * 16);   //malloc动态申请
	cout << "global variable (nGlobal): " << &nGlobal << endl;
	cout << "static variabe (nLocalStatic): " << &nLocalStatic << endl;
	//printf("local expression (Beijing China): 0x%X\n", pLocalString1);
	printf("local const expression (Wuhan Hubei): 0x%X\n", pLocalString2);
	//栈区
	cout << "local variable (nLocal): " << &nLocal << endl;
	cout << "local const variable(nLocalConst): " << &nLocalConst << endl;
	cout << "Local array (localArray[16]): " << &localArray << endl;
	//cout << "local pointer (pLpcalString1): " << &pLocalString1 << endl;
	cout << "local const pointer (pLpcalString2): " << &pLocalString2 << endl;
	cout << "local pointer to new (pNew): " << &pNew << endl;
	cout << "local pointer to malloc (pNew): " << &pMalloc << endl;
	//堆区
	printf("Local new : 0x%X\n", pNew);
	printf("Local malloc : 0x%X\n", pMalloc);

	return 0;
}