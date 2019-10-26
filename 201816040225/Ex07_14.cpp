#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
//void print(int );
int main()
{
    int n=0;
    int abc=0;
    vector<int>integers;
    cout<<"The initial size of integers is: "<<integers.size()//空的vetor对象
    <<"\nThe initial capacity of integers is: "<<integers.capacity();//vector对象存储空间
    //vector<int>p(20);
    for( int i=0;i<20;i++)//输入数字
    {
        cin>>n;
        if(n<10||n>100)
        {
            cout<<"数字错误"<<endl;
            cin>>n;
        }

    //integers.push_back(p[i]);
    }
    for(int m:integers)//判断是否重复
    {
        if(n==m)
        abc=1;
    }
    if(abc==0)
    {
        integers.push_back(n);
    }
    cout<<"\nOutput vector using iterator notation: ";
    for(int i=0;i<integers.size();i++)
    {
        cout<<integers[i];
    }
return 0;
}


