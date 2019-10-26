//
// Created by cz1999 on 2019/10/16.
//
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int f=0,num;
    array<int,20> items{};//定义长度为20的数组，和标志性变量f

    cout<<"Please input 20 numbers ( 10 =< number <= 100):\n";

    for(int &item:items)//循环输入20个数字
    {
        f=0;
        cin>>num;

        while(true)//判断num的有效性
        {
            if(num >= 10 && num <= 100)
                break;
            else
            {
                cout << "the number is not valid,please input again: \n";
                cin >> num;
            }
        }

        for(int item1:items)//判断输入的数字是否重复，若重复，则f=-1
            if (num == item1)
            {
                f = -1;
            }

        if(f == 0)//若输入的数不重复，则存入array
        {
           item = num;
        }

    }

    cout<<"The different number is: \n";
    //输出不重复的数字
    for(int item:items)
        if(item!=0)
        cout<<item<<" ";

    return 0;
}

