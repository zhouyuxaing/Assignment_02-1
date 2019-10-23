#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;//定义vector，使用其支持动态调整的功能
    int n,j;
    for (int i=0;i<20;++i)
    {
        cin>>n;
        if(n<10||n>100)
            n=0;
        if(n==0){
            a.push_back(0);//若数据无效，则在a中加0
            continue;
        }
        a.push_back(n);//输入所有数据
        for(j=0;j<i;j++){
            if(a[i]==a[j])
                a[i]=0;
        }
    }
    for (int i=0;i<20;++i)
    {
        if(a[i]!=0)
            cout<<a[i]<<" ";//输出所有不为0数据
    }
    return 0;
}
