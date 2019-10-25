#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
using namespace std;



int main()
{
    const size_t nSize=20;

    array<unsigned int,nSize> n={};


    for(size_t i=0;i<20;++i)         //输入20个数字
    {
        cin>>n[i];
    }
    int d=0;
    for(size_t i=0;i<20;++i)
    {
        if(n[i]<10||n[i]>100)      //检查输入的数据是否正确
           {
           cout<<"输入错误"<<endl;
           d=1;
            break;
            }
    }
    if(d==0)
    {
    int a,b,c;
   for(a=0;a<20;a++)               //将20个数字排序（冒泡排序法：从大到小）
   {
       for(b=0;b<20;b++)
       {
           if(n[a]>n[b])
           {
               c=n[a];
               n[a]=n[b];
               n[b]=c;
           }
       }
   }
   for(size_t i=0;i<20;++i)     //输出不重复的数字
   {
       if(n[i]!=n[i+1])         //如果前后两个数不同，输出。
        cout<<setw(5)<<n[i];

    }
    }
   return 0;
    }
