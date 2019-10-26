//201816040316 软件1803 朱玥潼
#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int,20> a={};//创建一个符合题意的最小的长度为20的一维array对象
	int number, flag = 1;
	
	cout<<"请输入一个大于10且小于100的整数"<<endl;
	for(int i=0;i<a.size();++i)
	{
		cin>>number;
		while(number<10||number>100)//判断数字是否有效 ，若无效则重新输入以保证输入20个有效的数字 
		{
			cout<<"您输入的数字为无效数字,请重新输入"<<endl;
			cin>>number; 
		}
		for(int j = 0;j <= i;j++)//判断数字是否重复 
		{
			flag= 1; 
			if(number == a[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			a[i] = number;
		}
	}
	
	cout<<"您输入的不同数值为："<<endl;
	
	for(int i=0;i<a.size();++i)//打印 array对象 
	{
		if(a[i] != 0)
		cout<<a[i]<<" ";
	}
	 
	return 0;
}
