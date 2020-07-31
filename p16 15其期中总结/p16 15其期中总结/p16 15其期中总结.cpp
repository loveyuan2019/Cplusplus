//2020-07-24 中午休息 盈嘉互联 1008
//2020-07-25 早晨 林业楼小平房
//小作业，求：2/1, 3/2, 5/3, 8/5, 13/8, 21/13这个序列的和
#include <iostream>
using namespace std;

int main(){
	//案例1，水仙花数计算，即一个三位数，各位上数字立方和等于本身，例如153，1的立方是1，5的立方是125，3的立方是27，相加等于153
	/*int x = 234;
	int z = x % 100;
	cout << z << endl;*/
	//for (int x = 100; x <= 999; ++x)
	//{
	//	int y = x;
	//	int bai_num = y / 100;	//得到百位上的数字如234，得到2
	//	bai_num = bai_num*bai_num*bai_num;
	//	y %= 100; //得到十位与个位，如234，得到34

	//	int shi_num = y / 10;		//得到十位数字，如34，得到3
	//	shi_num = shi_num*shi_num*shi_num;		
	//	y %= 10;		//得到个位，如34，得到4

	//	int ge_num = y;
	//	ge_num = ge_num*ge_num*ge_num;

	//	if (bai_num + shi_num + ge_num == x)
	//	{
	//		cout << x << endl;
	//	}
	//}

	//案例2，输出以下图案
	//*
	//***
	//*****
	//*******
	//*****
	//***
	//*
	for (int idx = 1; idx <= 7; idx += 2)
	{
		for (int jdx = 0; jdx < idx; ++jdx)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int idx = 5; idx >= 1; idx -= 2)
	{
		for (int jdx = 0; jdx < idx; ++jdx)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}