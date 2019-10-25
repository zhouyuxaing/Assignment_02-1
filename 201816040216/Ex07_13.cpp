#include <iostream>
#include<array>

using namespace std;


int main()//去重处理
{
    array<int,20> item={};int f =-1;
    //const size_t arraySize=20;
        int x=0,i,j;

    cout<<"请输入20个10到100的整数"<<endl;
    for(i=0;i<5;i++)//去重操作
    {
        cin >> x;
        f=-1;

        for(j=0;j<i+1;j++)
        {
            if(x==item[j])
            {
            f=0;
            }

        }
            if(f==-1)
            {
                item[i] = x;
            }

    }

    for(i=0;i<5;i++)//输出array对象
    {
        if(item[i]!=0)
        cout<<item[i]<<endl;
    }

    return 0;
}
