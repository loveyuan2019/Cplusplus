//2020-07-22 星期三 早晨 林业楼小平房
//需求，根据输入的1-7数字，输出相应的星期

#include <iostream>
using namespace std;

int main(){
	int ask ; 
	cout << "请输入数字1~7" << endl;
	cin >> ask;
	if (ask == 1)
	{
		cout << "monday" << endl;
	}
	else if (ask == 2)
	{
		cout << "tuesday" << endl;
	}
	else if (ask == 3)
	{
		cout << "wednesday" << endl;
	}
	else if (ask == 4)
	{
		cout << "thursday" << endl;
	}
	else if (ask == 5)
	{
		cout << "friday" << endl;
	}
	else if (ask == 6)
	{
		cout << "saturday" << endl;
	}
	else if (ask == 7)
	{
		cout << "sunday" << endl;
	}
	else 
	{
		cout << "输入错误，请重新输入" << endl;
	}
	return 0;
}