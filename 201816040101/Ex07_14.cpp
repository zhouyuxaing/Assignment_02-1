#include <iostream>
#include <vector>
#include <cstddef>
#include <stdexcept>
using namespace std;

int main()
{
    vector<int>num(0);
    int n;
    for(int i=0;i<20;++i)
    {
        cin>>n;
        int c=0;//标志
        for(int x:num)//判断是否有重复
        {
            if(n==x)
                c=1;
        }
        if(c==0)
            num.push_back(n);
    }
    cout<<"value of vector:"<<endl;//输出vector的值
    for(int b:num)
        cout<<b<<' ';
    return 0;
}
