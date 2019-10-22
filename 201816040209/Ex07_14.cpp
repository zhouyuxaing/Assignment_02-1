//
// Created by cz1999 on 2019/10/22.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int f=0,num,i=20;
    vector<int> items;//定义长度为0的vector，和标志性变量f

    cout<<"Please input 20 numbers ( 10 =< number <= 100):\n";

    while(i--)//循环输入20个数字
    {
        f = 0;
        cin >> num;

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

        for (int item1:items)//判断输入的数字是否重复，若重复，则f=-1
            if (num == item1) {
                f = -1;
            }

        if (f == 0)//若f==0，则存入vector
        {
            items.push_back(num);
        }
    }

    cout<<"The different number is: \n";

    //输出vector
    for(int item:items)
        cout<<item<<endl;

    return 0;
}


