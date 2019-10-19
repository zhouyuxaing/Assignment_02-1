#include <iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
    vector<int> alone;  //建立vector
    int num,i=20,flag,flag1=1;

    while(i--)
    {
        if(flag1)
            cout << "请输入一个整数(10-100):" << endl;
        cin >> num;
        flag=1,flag1=1;
        if(num>=10&&num<=100)       //有效数
        {
            for(int item:alone)     //遍历查重
            {
                if(item==num)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)                //不重复，压入vector
            {
                alone.push_back(num);
            }
        }
        else                        //无效数
        {
            flag1=0;
            cout << "数字无效！请重新输入:" << endl;
        }
    }
    for(int item:alone)             //遍历输出vector
        cout << item << ' ';

    return 0;
}


