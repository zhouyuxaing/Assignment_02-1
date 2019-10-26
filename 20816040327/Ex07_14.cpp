#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int>InputNum(20);
    int i,j= 0, number, flag=0;

    //提示输入
    cout << "please input your number:" << endl;

    //去重
     for(i=0;i<20;i++)
    {
        cin>>number;

        for(int FinNum:InputNum)
        {
            if(number==FinNum)
            {
                flag=1;
                break;
            }//相等则改变flag的值并退出循环
        }
        if(flag==0)
        {
           InputNum.push_back(number);
           j++;
        }
        if(flag==1)
            {
                flag=0;
            }

    }
    for(int FinNum:InputNum)
    {
        if(FinNum>=10&&FinNum<=100)
        cout << "your numbers are:" << endl;
       cout << FinNum << endl;
    }//输出

    return 0;
}
