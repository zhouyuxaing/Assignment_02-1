#include <iostream>
#include <array>
#include <vector>
#include <cstddef>
#include <stdexcept>
using namespace std;


int main()
{

    array<int, 20>a={0};
    int c=0;//标志
    int b;
    for(size_t i=0;i<a.size();++i)
    {
        cin>>b;
        c=0;
        for(size_t j=0;j<a.size();++j)//判断是否有重复
        {
            if(a[j]==b)
                c=1;
        }
        if(c==0)
            a[i]=b;
    }
    cout<<"value of array:"<<endl;
    for(int b:a)//输出array的值
        if(b!=0)
        cout<<b<<' ';

    return 0;
}
