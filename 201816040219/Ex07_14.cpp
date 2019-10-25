#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int N=20;
    vector < int > a; //创建一个vector对象
    int number,i;
    cout<<"请输入20个10-100的数字：\n";
    for(i=0;i<N;i++)
    {
        cin>>number;
        if(number<10||number>100)//输入数字的范围不对就重新输入
        {
            cout<<"请重新输入正确范围的数："<<endl;
            cin>>number;
        }
        if(number>=10&&number<=100)//判断是否有重复的数字，并记录下来
        {
            int flag=0;
            for(int j=a.size()-1;j>=0;j--)
            {
                if(number==a[j])
                    flag='/*'; //标记重复的数字
            }
            if(flag==0)
                a.push_back(number);//去重后把数字存入到vector中
        }

    }
    for(int x: a) //打印去重后的结果
    {
        if(x!=0)
            cout<<x<<" ";
    }
    return 0;
}
