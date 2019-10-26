#include <iostream>
#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
    const int arraysize=20;  //array的大小
    array < int , arraysize>a;  //a是一个具有20个整形的array
    cout<<"请输入20个数：";
    for(size_t i=0;i<a.size();++i)
    {
        cin>>a[i];

        if(a[i]<10||a[i]>100)
        {
            i--;
            cout<<"您输入的数据无效，请重新输入："<<endl;
            cin>>a[i];//判断读入的数据是否有效
        }
    }            //从键盘读入20个整数存入a中
    int k,j,temp;
    for(k=0;k<a.size()-1;++k)
    {
        for(j=k+1;j<a.size();j++)
        {
            if(a[k]>a[j])
            {
                temp=a[k];
                a[k]=a[j];
                a[j]=temp;
            }
        }
    }//将a中数据排序以便去重
    array<int ,arraysize>b={};//建立一个array b 并初始化为0
    j=0;
    for(int g=0;g<a.size();++g)
    {
        if(g==0)
            {
                b[j]=a[g];//将a中第一个数存入b中 因为a中没有前面的数据与第一个重复
                j++;//b的下标加1
            }
        else
            if(a[g]!=a[g-1])
            {
                b[j]=a[g];//如果a[g]不与前一个数据重复就把他存入b中
                j++;//b的下标加1
            }
    }
     //b中前J个数据便是A去重后并排序后的数据
    return 0;
}
