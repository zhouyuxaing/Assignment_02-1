#include<iostream>
#include<iomanip>
#include<array>
using namespace std;
int main()
{
    array<int,20>n={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};//初始化array
    cout<<"n before dispose: ";
    for(int m:n)
        cout<<m<<" ";//去重前的数字
    for(size_t i=0;i<n.size();i++)
    {
        for(size_t j=i+1;j<n.size();j++)
        {
            if(n[i]==n[j]);
            //j=i++;
            n[j]==n[j++];
        }
    }
    cout<<"\nn after dispose: ";//输出去重后的数字
    for(int m:n)
    cout<<m<<" ";
    cout<<endl;

}
