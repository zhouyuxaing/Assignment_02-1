#include <iostream>
#include <array>

using namespace std;

int main()
{
    int a; //标准化输入一个数
    int flag=0;//定义一个标志变量
    int n=0;//
    array<int, 20>array1={};//定义一个array数组
    for(size_t i =0;i < array1.size();i++)
    {
        flag = 0;//flag变量，用于去重，如果重复值改为1
        cin >> a;//输入一个值
        if(a>=10&&a<=100)//过滤数据，在10-100内
        {
           for(int item : array1)
            {
                if(a == item )//去重
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                array1[n]=a;//存入array数组中
                n++;
            }
        }

    }
    cout << endl;
    for(int item : array1)
    {
        if(item == 0)//如果不为0，就输出
        {
            break;
        }
        cout << item <<" ";
    }
}
