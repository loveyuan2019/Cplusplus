#include <iostream>
using namespace std;
//打印Hello World小程序
int main(){
	cout << "Hello World" << endl;
	cout << "2+3=" << 2 + 3 << endl;

	//打印1+2+3+。。。100的总和是多少
	int sum = 0;
	for (int idx = 1; idx <= 100; ++idx)
		sum += idx;
	cout << "1+2+3+..100=" << sum << endl;
	return 0;
}
