#include <iostream>
#include <iomanip>
#include <array>
#include <string>
using namespace std;

int main()
{
    array <int,20> items;         //定义一个ayyay数组
    double x;                     //定义输入的整数
    cout<<"请输入20个数: "<<endl;
    for(size_t i=0;i<20;i++)
    {
        cin>>x;
        if(x<10||x>100)           //判断输入是否合法
        {
            items[i]=0;
            continue;            //如果输入不合法，则置为0
        }
        items[i]=x;              //把处理后的数据存入ayyay数组
    }
        for(size_t j=0;j<19;j++)   //循环遍历数组
        {
            if(items[j]==items[j+1])   //把这个数据和他后面的数据做比较
            {
                items[j]=items[j+1]=0;    //如果数值相同就把这两个数据置为0
            }
        }

    for(size_t k=0;k<items.size();++k)  //循环遍历
    {
        if(items[k]!=0)
        cout<<items[k]<<endl;        //输出数组中不为0的数据
    }
    return 0;                      //完美
}
