#include <iostream>
#include <array>

using namespace std;

int main()
{
    array< int, 20 > a;//a是一个有20个int变量的array类型
    int num,i,k,x,n=0;//定义几个int变量
    cout << "输入20个范围在10~100的整数" << endl;
    while( cin >> num )//利用while循环读取第一个符合范围的整数
    {
        if(num>=10&&num<=100)
        {
            break;
        }
    }
    a[0] = num;//把第一个整数赋给a[0]
    for(i=0; i<2; i++) //在19次循环中输入新的整数并与已输入的作比较是否相等
    {
        x = 0;//令x=0;
        while( cin >> num )//利用while循环读取新的符合范围的整数
        {
            if(num>=10&&num<=100)
            {
                break;
            }
        }

        for(k=0; k<=n; k++) //让新输入的整数与已输入的对比
        {
            if(a[k]==num)//若新输入的整数已存在则令x=1并结束循环
            {
                x = 1;
                break;
            }
        }
        if(x==0)//若x=1则将新整数赋予数组中
        {
            a[++n] = num;
        }
    }
    cout << "去重后数组为：" <<endl;
    for(i=0; i<=n; i++) //输出数组中的值
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
