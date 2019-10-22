#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a(0); // 建立一个大小为0，类型为int的array数组
    int n,m,flag;
    /*开始查重*/
    for (int i=0; i<20 ; ++i)
    {
        flag=0;// 定义flag判断是否有重复的数字
        cin>>n; //输入数字
        if(n>=10 && n<=100)  //判断数字的大小是否符合规定
        {
            /*每次输入进一个数字，判断该数字与之前的数字是否有重合*/
            for (int t:a)
            {
                if(t==n)
                {
                    flag++;//flag=1，则有重复的数字
                    break;
                }
            }
        }
        else  //不符合则跳出循环
        {
            cout<<"输入数字不在范围内"<<endl;
            break;
        }
        if(flag==0)
            a.push_back(n);//在其后加入新的数字1
    }
    cout <<endl;
    for(int x:a)
    {
        cout<<x<<endl; // 打印成功，查重成功
    }
}
