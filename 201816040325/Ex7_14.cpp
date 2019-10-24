#include <iostream>
#include <vector>

using namespace std;

int Judge(int x,vector<int>a,int j);

int Judge(int x,vector<int>a,int j)//查重
{
    int flag=0;
    int i;

    for(i=0;i<=j-1;i++)//判断读入的数与它之前的数是否有相同
    {
        if(x==a[i])
        {
            //若有相同的数，则flag==1
            flag=1;
        }
    }
    return flag;//返回flag的值
}
int main()
{
    int i;
    int j=0;//记录对象a的下标
    int x;//存储输入的数值
    vector<int> a;//定义一个vector对象a，用于存储有效数字

    cout<<"请输入 大于等于10小于等于100 的20位有效数字：";
    cout<<endl;
    for(i=0;i<20;i++)
    {
        cin>>x;//读入一个数，存入到x中

        if(x>=10&&x<=100)//判断x的有效性
        {
            if(Judge(x,a,j)==0)//判断读入的数与它之前的数是否有相同
            {
                a.push_back(x);//将有效数字x存入到对象a中
                j++;
            }
        }
    }
    cout<<"输出结果为：";
    cout<<endl;
    for(int k:a)
    {
        if(k!=0)//输出所有有效数字
        {
            cout<<k;
            cout<<" ";
        }
    }
    return 0;
}


