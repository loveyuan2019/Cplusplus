//2020-07-20 星期一 下午下班后 林业楼小平房 
//赋值运算符原则，多给少会丢失，少给多则没事。还有其他

#include <iostream>
using namespace std;

int main(){
	int x = 100;
	cout << x / 3 << endl;
	int y = 4;
	y -= 2;
	cout << y << endl;
	return 0;
}