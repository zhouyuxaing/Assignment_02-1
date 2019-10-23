#include <bits/stdc++.h>//定义c++万能库

using namespace std;

int main()
{
    array<int ,20> a;
    int n,j;
    for (int i=0;i<20;++i)
    {
        cin>>n;
        if(n<10||n>100)
            n=0;
        if(n==0){
            a[i]=0;
            continue;
        }//判断输入是否有效，若不有效赋值为0
        a[i]=n;
        for(j=0;j<i;j++){
            if(a[i]==a[j])
                a[i]=0;
        }//判断输入是否重复，若重复赋值为0
    }
    for (int i=0;i<20;++i)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";//输出所有数组内不为0的数据
    }
    return 0;
}
