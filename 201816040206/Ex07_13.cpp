
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,20> pgs{};//创建一个长度为20的array对象
    int pg,j,flag;

    cout<<"请输入一个大于10且小于100的整数(包括10和100)"<<endl;
    for(int i=0;i<20;++i)
    {
        flag = 0;
        cin>>pg;

        if(pg>=10&&pg<=100)//判定数字的有效性以及是否重复
        {
          for(j=0;j<20;j++)
          {
              if(pg == pgs[j])
                {
                    flag =-1;
                    break;
                }
          }
          if(flag==0)
          {
              pgs[i]=pg;
          }
        }
        else
        {
          cout<<"输入的数字无效";
        }
    }


    for(int i : pgs)//基于范围的for循环输出
    {
        if(i!=0)
        cout<<i<<endl;
    }

    return 0;
}

