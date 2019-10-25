#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,20>a={};
    //定义一个长为20的数组
    int x;
    cout<<"请输入20到100的整数"<<endl;
    for(size_t i=0;i<a.size();i++)
        //取定义于数组中的长度运用于for循环中
    {
        cin>>x;
    //输入20到100的整数
        if(x>=10&&x<=100)
            //判断输入的数是否在20-100之间
        {
            a[i]=x;
        //将这个数存入到定义的数组中
            for(size_t j=0;j<i;j++)
                //判断是否存在相同的数
            {
                if(a[i]==a[j])
                //将后存入相同的数据赋值为0
                    a[i]=0;
            }

        }
    }
    cout<<"你输入的数是"<<endl;
    for(size_t i=0;i<a.size();i++)
        //利用for循环输出，且跳过不为0的数
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
    return 0;
}
