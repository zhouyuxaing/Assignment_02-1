#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int,20> a;
    int flag=0;
    int nm;
    int j,i=0;
   for(size_t i=0;i<a.size();++i)//初始化数组
   {

       a[i]=0;

   }
   cout<<"请输入20个整数";
   for(j=0;j<=19;j++)//控制输入的数量为20
   {
       flag=0;
       cin>>nm;

       if(nm<=100&&nm>=10)//判断是否符合10-100之间的数
       {
           for(i=0;i<=19;i++)
           {
               if(a[i]==nm)//查重，有重复
               {
                    flag=1;
                    a[j]=0;
               }
            }
               if(flag==0)//查重，无重复
               {
                   a[j]=nm;
               }
       }

   }
   cout<<"输出的数为:";
   for (i=0;i<=19;i++)
   {
       if(a[i]!=0)
       cout<<a[i]<<" ";
   }
    return 0;
}
