//p7 06C++中变量 2020-07-19 周日 小平房 
//作业：const常变量与#define 宏定义有什么区别？
//区别有：

#include <iostream>
using namespace std;

int main(){
	const int num = 4; //const关键字意思是常变量，即变量不能再重新赋值了
	int num = 5;
	return 0;
}