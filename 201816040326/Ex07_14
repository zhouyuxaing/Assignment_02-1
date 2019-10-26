//201816040326 软件1803 朱玥潼
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>a(5);//创建一个vector对象，因为vector是动态的，所以初始长度随意
	int number,flag = 1;

	cout<<"请输入一个大于10且小于100的整数"<<endl;//输入
	for(int i = 0;i < 20; ++i)
	{
		cin>>number;
		while(number<10||number>100)//判断数字是否有效 ，若无效则重新输入以保证输入20个有效的数字
		{
			cout<<"您输入的数字为无效数字,请重新输入"<<endl;
			cin>>number;
		}
		flag = 1;
		for(int j :a)//判断数字是否重复
		{
			if(number == j)
                flag = 0;
		}
		if(flag)
		{
			a.push_back(number);//将未重复的数字推入vector
		}

	}

	cout<<"您输入的不同数值为："<<endl;

	for(int i = 0;i < a.size();i++)//打印
	{
		if(a[i]!= 0)
		cout<<a[i]<<" ";
	}

	return 0;
}
