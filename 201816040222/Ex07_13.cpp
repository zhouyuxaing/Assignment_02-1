#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <int,20> a={};//定义array用来存数据
    int x,m=0;
    cout <<"请输入20个10~100的数" <<endl;
    for (size_t i=0; i<a.size(); ++i)
    {
        cin >> x;
        if   (x>=10&&x<=100)//判断x的范围是否符合要求
        {
            m=x;
        }
        a[i]=m;
        for (size_t j=0; j<i; j++)
        {
            if (a[i]==a[j])//判断存入的数据是否重复，重复则记为0
            a[i]=0;
        }
    }
    for (size_t i=0; i<=a.size(); ++i)//输出满足要求的数据
    {
        if (a[i]!=0)
            cout <<a[i]<<" ";
    }
    return 0;
}



