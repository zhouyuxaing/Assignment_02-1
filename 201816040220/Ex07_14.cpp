#include <iostream>
#include <vector>

using namespace std;
void push_back( vector <int> &);
int main()
{
    vector<int> i(20);                 //定义一个空的vector数组
    push_back(i);                     //进入push_back函数
    return 0;
}
void push_back( vector <int> &items)
{
   int i,x,flag=1,j=1;
   for(i=0;i<20;i++)
   {
       cin>>x;
        for(int item:items)           //从输入的第一个数开始，遍历，如果相同
        {                             //flag=0，退出循环
            if(x==item)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)                  //flag=1，把x放入array数组
        {
           items[j]=x;
           j++;
        }
        if(flag==0)                 //把flag变为0，下次循环再用
            flag=1;

    }
    for(int item:items)            //输出
    {
        if(item>=10)
       cout <<item<<endl;
    }

}
