//2020-07-23 星期四 早晨 林业楼小平房 

#include<iostream>
using namespace std;

int main(){

	//需求1，输入0-6，输出对应的星期，六日输出周末。if语句来实现
	int x = 0;
	cout << "请输入数字" << endl;
	cin >> x;
	/*if (x == 1)
	{
		cout << "今天是星期一" << endl;
	}
	if (x == 2)
	{
		cout << "今天是星期二" << endl;
	}
	if (x == 3)
	{
		cout << "今天是星期三" << endl;
	}
	if (x == 4)
	{
		cout << "今天是星期四" << endl;
	}
	if (x == 5)
	{
		cout << "今天是星期五" << endl;
	}
	if (x == 5)
	{
		cout << "今天是星期五" << endl;
	}
	if (x == 6)
	{
		cout << "今天是星期六" << endl;
	}
	if (x == 0)
	{
		cout << "今天是星期日" << endl;
	}*/

	//需求2，输入0-6，输出对应的星期，六日输出周末。switch语句来实现,如果没有break,如果输入2，会显示星期二及以后的，有则跳出switch
	switch (x)
	{
	case 0:
		cout << "今天是星期日" << endl;
		cout << "今天是星周末" << endl;
		break;
	case 1:
		cout << "今天是星期一" << endl;
		break;
	case 2:
		cout << "今天是星期二" << endl;
		break;
	case 3:
		cout << "今天是星期三" << endl;
		break;
	case 4:
		cout << "今天是星期四" << endl;
		break;
	case 5:
		cout << "今天是星期五" << endl;
		break;
	case 6:
		cout << "今天是星期六" << endl;
		cout << "今天是星周末" << endl;
		break;
	default:
		cout << "您输入的数字有误" << endl;
	}
	return 0;
}