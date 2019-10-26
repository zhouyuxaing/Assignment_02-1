#include <iostream>
#include<vector>

using namespace std;


int main()//去重处理
{
    vector<int> items;//创建vector
    int f =-1;
    //const size_t arraySize=20;
        int x=0,i;

    cout<<"请输入20个10到100的整数"<<endl;
    for(i=0;i<20;i++)//去重操作
    {
        cin >> x;
        f=-1;

        for(int &item:items)
        {
            if(x==item)
            {
            f=0;
            }

        }
            if(f==-1)
            {
                items.push_back(x);
            }

    }

    for(int&item:items)//输出vector对象
    {
        if(item!=0)
        cout<<item<<endl;
    }

    return 0;
}
