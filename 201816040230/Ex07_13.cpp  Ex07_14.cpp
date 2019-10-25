Ex07_13.cpp

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int num;//输入的数；
    array<int,20>a= {0};
    int x,i,j,z=0;
    for(i=0; i<20; i++)//将数存入array对象里面
    {
        int flag=0;
        cin>>num;
        for(int j=0; j<20; j++)
        {
            if(a[j]==num)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a[z++]=num;
        }

    }
    for(int x=0; x<z; x++)//输出存入的数
    {
        cout<<a[x]<<' ';
    }
    return 0;
}


Ex07_14.cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>a;
    int num;
    int i;
    for(i=0; i<20; i++)//将数字存入vector对象中
    {
        int flag=0;
        cin>>num;
        for(vector<int>::iterator j=a.begin(); j<a.end(); j++)
        {
            if(*j==num)//如果输入数字与之前存入的数字相同
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            a.push_back(num);
        }
    }
    for(vector<int>::iterator j=a.begin(); j<a.end(); j++)//输出存入的数字
    {
            cout<<*j<<' ';
    }
    return 0;
}

