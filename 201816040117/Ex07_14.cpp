#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,k=0,flag;//循环标志数字
    int c;//待输入数字c
    vector<int>integers(0);//初始化一个空的vector对象integers
    cout<<"please input  20 numbers:"<<"\n";//提示语
    for(i=0;i<20;i++)
    {
       cin>>c;//输入c
       flag=0;//标志器flag初始化为0
       if(c>=10&&c<=100)
       {
          for(j=0;j<k;j++)
          {
              if(integers[j]==c)
                flag=1;//如果与vector中已有数据重复，flag变为1
          }
          if(flag==0)
            integers.push_back(c);//根据flag的值来决定是否插入输入的c
       }
       k++;//改变k的值来进行输入数据的去重循环
    }
    cout<<"the outputted numbers: \n";//提示语
    for(int put:integers)
        cout<<put<<" ";//输出vector对象integers
    return 0;
}
