#include <iostream>
#include<cstdlib>
#include<array>

using namespace std;

const int Max=20;

int main()
{
    array<int,Max> alone={0};   //建立数组

    int i=20, j=0;
    int num, flag,flag1=1;

    while(i--)  //      依此输入20个数
    {
        if(flag1)
            cout << "请输入一个整数(10-100):" << endl;
        cin >> num;
        flag=1,flag1=1;
        if(num>=10&&num<=100)   //有效数
        {
            for(int it:alone)   //遍历查找是否重复
            {
                if(it==0)
                    break;
                else if(it==num)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)    //不重复加入数组
            {
                alone[j]=num;
                j++;
            }


        }
        else    //无效数，重新输入
        {
            flag1=0;
            i++;
            cout << "数字无效！请重新输入:" << endl;
        }
    }
    for(int it:alone)   //将数组中的非0数输出
    {
        if(it!=0)
            cout << it <<' ';
    }
    return 0;
}


