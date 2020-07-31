//2020-07-23 星期四 早晨 林业楼小平房

#include<iostream>
using namespace std;

int main(){
	//案例1，实现1-100的累加，用while 语句
	/*int x = 1,sum = 0;
	while (x <= 100)
	{
		sum += x;
		x++;
	}
	cout << "1+2+3+...=" << sum << endl;*/

	//案例2，实现1-100的累加，用do while 语句
	int x = 1, sum = 0;
	do 
	{
		sum += x;
		x++;
	} while (x<=100);
	cout << "1+2+3+...=" << sum << endl; 


	return 0;
}