//2020-07-20 周一 早晨 林业楼小平房 p8 07 C++运算符
//知识点包括：强制类型转换、自增X++自减X--；除法求余等操作。

#include <iostream>
using namespace std;

int main(){
	//下面是普通运算
	//float x =10.8;
	//int y = 2;
	//cout << x/y << endl;

	//下面是强制类型转换如（int）强制转换成整型
	//float x =10.8;
	//int y = 2;
	//float q=x / y;
	////cout << (int)q%2 << endl; //强制转换方法1
	//cout << int(q) % 2 << endl; //强制转换方法2

	//下面是自增自减训练1
	//int x = 3;
	//++x;
	//x++;
	//cout << x << endl;

	//下面是自增自减训练2
	int x = 3;
	int y =x++; //这一步X++当成一个式，式值是3,但x的值是3+1
	int z =++x; //这一步，X以前是4，但++X后，变为5，并把5赋值给Z
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}