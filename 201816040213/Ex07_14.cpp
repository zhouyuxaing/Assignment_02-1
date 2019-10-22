#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > a; //创建一个vector对象
    int num;
    cout<<"请输入20个数字：\n";
    for(int i=0;i<20;i++)
    {
        cin>>num; //输入一个数字
        if(num>=10&&num<=100)
        {
            int flag=1; //起始时没有重复数字
            for(int j=a.size()-1;j>=0;j--) //将该数字与vector元素比较
            {
                if(num==a[j])
                    flag=0; //0代表找到重复数字
            }
            if(flag==1) //若无重复数字，将该数字存入a中
                a.push_back(num);
        }
    }
    for(int item : a) //依次打印这些元素
    {
        if(item!=0)
            cout<<item<<" ";
    }
    return 0;
}
