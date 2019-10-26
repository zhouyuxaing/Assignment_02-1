#include<iostream>
#include<vector>

using namespace std;
int main()
{

    vector<int> a;//定义一个动态数组
    int x;
    cout<<"请输入20个10—100的整数"<<endl;
    for( int i=0;i<20;i++)
    {
        cin>>x;

        if(x>=10&&x<=100)//判断是否符合题目要求

            a.push_back(x);

    }
    for (int i=19; i>0; i--)//查重，将相同数据的后值赋值为0
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
                a[i]=0;
        }

    }

    cout<<"输出你输入的数:"<<endl;
for(int i=0;i<20;i++)//去除数组中为0的数，并输出
{
    if(a[i]!=0)
        cout<<a[i]<<"  ";
}

	return 0;
}
