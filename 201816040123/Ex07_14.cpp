#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>n(1); //创建元素个数为1的vector数组
    int a,i,j,flag;  //定义一些变量
    for(i=0;i<20;++i)
    {
        cin>>a;     //读取一个数
        flag=0;
        if(a>=10&&a<=100)  //判断读取数的大小
        {
            for(j=0;j<n.size();++j)
            {
                if(n[0]==0)
                {
                    n[0]=a;
                }

                if(a==n[j])
                {
                    flag=1;  //flag用来判断读取的输是否在数组中间存在
                    break;
                }
            }
            if(flag==0)
                n.push_back(a); //vector是动态数组，先使数组长度加1再将读取的数存入最后一位
        }
    }
     cout<<endl;
     for(j=0;j<n.size();++j)  //根据数组的长度将数组的元素输出
        cout <<n[j]<<" ";
     cout<<endl;
}
