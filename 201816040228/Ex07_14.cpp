#include <iostream>
#include <iomanip>
#include <vector>
#include <cstddef>

using namespace std;
int main()
{
    vector< int> n={};//设置一个vector对象n，所有元素被设置为0
    int shu,i,can=0;//定义一个数，和参

    for(i=0;i<20;i++)//20个数设置一个循环
    {
        cin>>setw(7)>>shu>>setw(13);//输入20个数

        if (shu < 10 || shu > 100)//删除小于10和大于100的数
        {
           continue;
        }
        else//满足条件
        {
            int x=0;
            for (x=0; x < can; ++x)
            {
                if (n[x] == shu)//若数与之前存入对象n中的数相同就break掉
                {
                    break;
                }
            }
            if ( x == can)//如果数与之前的数不同就用push_back函数把不同的数添加到vector对象n中
            {
                //n[c++]=w;
                n.push_back(shu);
                can++;
            }
        }
    }
    for (int k:n)
    {
        if(k!=0)
        {
            cout <<k<<setw(13)<< " "<<endl;//将存入到vector对象n中的不同的数输出
        }

    }
}
