#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> items(1);         //定义一个vector数组
    double x;                     //定义输入的整数
    int flag;
    cout<<"请输入20个数: "<<endl;
    for(size_t i=0;i<20;i++)
    {
        flag=0;
        cin>>x;
        if(x>=10&&x<=100)    //在输入数据有效的前提下
        {
            for(size_t j=0;j<items.size();j++)
            {
                    if(items[0]==0)
                    {
                        items[0]=x;  //把x赋值给数组第一个数；
                    }
                if(items[j]==x)   //如果重复，就跳出循环并改变flag
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            items.push_back(x);  //把有效的数存入vextor动态数组
        }
    }
    for(size_t k=0;k<items.size();++k)  //循环遍历
    {
        cout<<items[k]<<endl;        //输出数组中的数据
    }
    return 0;                      //完美
}
