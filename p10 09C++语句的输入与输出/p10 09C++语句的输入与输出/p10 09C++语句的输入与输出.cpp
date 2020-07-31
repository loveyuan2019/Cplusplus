//2020-07-21 星期二 早晨 林业楼小平房
// 输入cin、输出cout的使用 把他们当成瀑布流一样，从哪流向哪
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//下面是cout的使用
	//int a = 3; int b = 4;
	//cout << a << b << endl;

	//下面是cin的使用
	//int a = 0; int b = 0;
	//cin >> a >> b  ; //方法1，另外不能写成cin >>a ,b;
	//cin >> a;	//方法2
	//cin >> b;	//方法2
	//cout << a << b << endl;

	//这样一个需要，不管小数点多少位，都要打印出两位小数来
	cout << fixed << setprecision(2) << endl;  //刚输入这个setprecision时，会波浪，右键，refactor,add include添加头文件
	float c = 2.1;
	cout << c <<endl ;
	return 0;
}