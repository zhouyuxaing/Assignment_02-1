#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    int flag=0;
    vector<int>obj;//创建一个vector变量
    for(size_t i=0;i<20;i++)
    {
        flag = 0;
        cin >> a;
        if(a<=100&&a>=10)//过滤数据
        {
            for(int item : obj)
            {
                if(a == item)//判断是否去重
                {
                    flag =1 ;
                    break;
                }
            }
            if(flag == 0)
            {
                obj.push_back(a);//添加数据
            }
        }
    }
    vector<int>::iterator it;//迭代器
    for(it=obj.begin();it!=obj.end();it++)
    {
        cout << *it<<" ";
    }

    return 0;
}
