#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> items(1);
    int j=0,k,flag=1,m,x;

     for(m=0;m<20;m++)
   {
       cin>>x;
       j++;               

      if(m==0)              
        items[0]=x;                     //把第一个数赋给items

       else{
        for(k=0;k<j;k++)                 //将读取的数逐个与现有的数比较
          {
             if(x==items[k])                 //如果相同flag=0
             {
                 flag=0;
                 break;
             }
          }
       }
       if(flag==1&&m>0)                   //不让第一个数push  
       items.push_back(x);              //把数push_back到items

       else flag=1;
    }

     for(int item:items)            //输出

       cout <<item<<endl;

    return 0;
}
