//2020-07-21 星期二 早晨 林业楼小平房
//如果。。就。。否则
//关系运算符，小于。大于。不等于这样的内容。
//小作业，根据用户输入1-7，输入星期几，1是星期一，7是星期日，以此类推。

#include <iostream>
using namespace std;

int main(){
	//下面是案例1,判断张三是不是成年人，这是第一种方式，要多练。if后面的双括号可加也可不加，
	int zhangsan_age = 21;
	int zhangsan_sex = 2; //0为女生，1为男生
	/*if (zhangsan_age >= 18)
	{
		cout << "张三是个成年人" << endl;
	}*/

	//下面是案例2，看加大括号的意义，如果不加大括号，if语句只影响后面一条，如果加了会影响整个里面的语句，如：
	//if (zhangsan_age >= 18)
	//	cout << "张三是个成年人" << endl;  //当这条即使不成立，下一句不影响，仍会执行。但如果加了大括号，则里面不会执行。
	//	cout << "aaaaaaa" << endl;
	

	//下面是案例3,判断张三是不是成年人，否则是小孩，执行语句可加大括号也可不加。
	/*if (zhangsan_age <= 3)
		{
			cout << "张三是个婴儿" << endl;
		}
		
	else if (zhangsan_age <= 18)
		{
			cout << "张三是个少年" << endl;
		}
	else if (zhangsan_age <= 40)
		{
			cout << "张三是个中年人" << endl;
		}*/
	
	//下面是案例4,if 里面再加嵌嵌套。
	if (zhangsan_age <= 3)
	{
		if (zhangsan_sex == 0)
		{
			cout << "张三是个男婴儿" << endl;
		}
		else
		{
			cout << "张三是个女婴儿" << endl;
		}
	}

	else
	{
		if (zhangsan_sex == 0)
		{
			cout << "张三是个男成年人" << endl;
		}
		else
		{
			cout << "张三是个女成年人" << endl;
		}
	}

	
	
	return 0;
}