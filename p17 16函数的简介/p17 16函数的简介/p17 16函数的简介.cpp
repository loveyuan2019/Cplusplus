//2020-07-26 星期日，早晨 林业楼小平房 

#include<iostream>
using namespace std;



//案例1，没有参数，没有返回值
//void print_mes()
//{
//	cout << "hello world" << endl;
//}

//案例2，有两个参数，有返回值
//int add(int x, int y)
//{
//	return x + y;
//}

//案例3，函数的调用
int add(int x, int y)	/*小括号里面是形参*/
{
	int sum = x+y;
	return sum;
}
int main(){
	int sum1=add(2, 4);		/*小括号里面是实参*/
	cout << "sum1的值是：" << sum1 << endl;
	return 0;
}