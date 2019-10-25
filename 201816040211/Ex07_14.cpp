#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> items(20);
    int i,j,h=1;
    for(i=0;i<20;i++)
    {
        cin>>items[i];
    }  //把数据存到items中
    for(i=0;i<20;i++)
    {

        if(items[i]>=10 && items[i]<=100) //判断数据是否符合10到100的区间
        {
            if(i>0)
            {
                for(j=0;j<i;j++)
                {

                   if (items[i]==items[j])
                   {
                       h=0;

                   }
                } //查重  判断数据是否一样
                if (h == 1)
                {cout<<items[i]<<" ";}
                else if (h == 0) h=1;  //跳过相同的数据
            }
            else
            cout<<items[i]<<" ";  //判断是否是第一个数据
        }
        else if(items[i]<10 || items[i]>100)
        {
            i=(i+i)/2;
        } //跳过不合适的数据
    }
    return 0;
}
