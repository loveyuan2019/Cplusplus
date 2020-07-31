// 2020-07-19 周日  小平房 王圆跟同事去泰山了  p6节课程
// C++中各种类型，如短整型、无符号短整型、字符串等，有个列表，表示“桶”大小。
// 还有转义字符常量这样类似的知识

#include <iostream>
using namespace std;
#define	PRICE 30

int main(){
	cout << "张三要去买苹果了。、、。。\r\n";
	int number = 5;
	cout << "张三要买" << number << "斤，苹果，每斤价格是：\"" << PRICE << "\"元/斤\r\n"; //  \"的用法，30是不是被括号括起来了
	cout << "张三总共要付" << number*PRICE << "\'元\' " << endl ;	// \'的用法

}