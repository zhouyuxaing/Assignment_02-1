#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int N=91;//10-100总共91个数字
     int a=0;//刚开始没有重复
     int j=0;//数字的下标
     int date;//读数据
   array<int, N> figures = {"20", "30", "30", "50", "100"};
   for(i=1; i<=20; i++)
   {
       cin>>date;
   }
   while(figures[j]>0)
   {
       if(figures == date)//查重
       {
        a=1;
   }
   j++;
   else
    cout<<figures[j]<<"";
   j++;
   }
    return 0;
}

