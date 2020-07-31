//2020-07-28 早晨 林业楼小平房

#include<iostream>
using namespace std;

//下面的两个函数如果更换位置，会怎么样？如果换位置，则不能被执行。如果想要放main函数下面，要先前置声明把int add(int x, int y);放在main函数上方
int add(int x, int y)
{
	return x + y;
}

int main(){
	int a = 2, b = 5;
	int sum = add(a, b);
	cout << "sum=" << sum << endl;
	return 0;
}

