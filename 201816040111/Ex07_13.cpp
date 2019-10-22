#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int,20> a= {}; // 建立一个大小为20，类型为int的array数组
    int n;
    /*开始进行查重*/
    for (int i=0; i<20; ++i)
    {
        cin>>n; //输入数字
        if(n>=10 && n<=100)  //判断数字的大小是否符合规定
        {
            a[i]=n;
            if(i>=1)  //先存入a[0]，每次再从i>=1开始循环判断下标i一直到下标0，哪一个是重复的数字
            {
                for (int j=0; j<i; ++j) // 开始循环
                {
                    if(a[j]==n) //查重成功
                        a[i]='\0'; // 将查重的数字置空，即将数字变为 0
                }
            }
        }
        else  //不符合则跳出循环
        {
            cout<<"输入数字不在范围内"<<endl;
            break;
        }
    }
    cout <<endl;
    for(int x:a)
    {
        if(x==0) // 判断数组的数字哪个是 0 ，如果是 0 则跳过，继续打印数字
            continue;
        cout<<x<<endl; // 打印成功，查重成功
    }
}
