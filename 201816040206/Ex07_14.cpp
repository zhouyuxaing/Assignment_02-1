
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> pgs;//创建一个长度为20的vector对象
    int pg,flag;

    cout<<"请输入一个大于10且小于100的整数(包括10和100)"<<endl;

    for(int i=0;i<20;++i) //普通for循环
    {
        flag = 0;
        cin>>pg;

        if(pg>=10&&pg<=100)//判别有效性
        {
          for(int j:pgs)
          {
              if(pg == j)
                {
                    flag =-1;
                    break;
                }
          }
          if(flag==0)
          {
              pgs.push_back(pg);//加入vector中
          }
        }
        else
        {
          cout<<"输入的数字无效";
        }
    }


    for(int i : pgs)
    {
        cout<<i<<endl;
    }
    
    return 0;
}

