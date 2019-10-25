#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a(0);
    int flag=0;
    int nm;
    int j,i=0;

   for(j=0;j<=19;j++)//用户输入20个数
   {
       flag=0;
       cin>>nm;

       if(nm<=100&&nm>=10)//判断是否符合10-100的条件
       {
           for(int i:a)
           {
               if(i==nm)//查重，有重复
               {
                    flag=1;
               }
            }
               if(flag==0)//查重，无重复，放入
               {
                   a.push_back(nm);
               }
       }

   }
   for (int i:a)
   {
       cout<<i<<" ";
   }
    return 0;
}
