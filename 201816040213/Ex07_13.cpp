#include <iostream>
#include <array>

using namespace std;

int main()
{
    array < int, 20 > a={0}; //定义一个长度为20的数组并初始化为0
    int num, count=0;
    cout<<"请输入20个数字：\n";
    for(int i=0;i<20;i++)
    {
        cin>>num;
        if(num>=10&&num<=100) //依次输入数字，若该数字符合范围，则存入数组a中
        {
            a[count]=num;
            count++;
        }
    }
    for(int j=0;j<count-1;j++)
    {
        for(int k=j+1;k<count;k++)//选取需要比较的元素
            if(a[k]==a[j]) //若有元素与之重复，则重置为0
                a[k]=0;
    }
    for(int m=0; m<count; m++)
    {
        if(a[m]!=0)
            cout<<a[m]<<" ";//输出不为0的元素即为所求
    }
    return 0;
}
