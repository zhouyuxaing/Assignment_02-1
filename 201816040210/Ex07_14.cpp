#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > a(1);//a是一个有一个int类型变量的vector
    int num,i,x;//定义几个int常量
    cout << "输入20个范围在10~100的整数" <<endl;
    while( cin >> num )//在while中读取出第一个符合范围的整数num
    {
        if(num>=10&&num<=100)
        {
            break;
        }
    }
    a[0] = num;//把num的值赋给a[0]
    for(i=0; i<19; i++)//在19次循环中读取新的整数并与之前的比较
    {
        x=0;//令x=0
        while( cin >> num )//读取出新的符合范围的整数
        {
            if(num>=10&&num<=100)
            {
                break;
            }
        }
        for(int k:a)//用新整数与之前的整数比较
        {
            if(k==num)
            {
                x=1;//如果新整数已存在则结束循环并令x=1
                break;
            }
        }
        if(x==0)//如果x=0则把新整数加到数组a中
        {
            a.push_back( num );
        }

    }
    cout << "去重后的数组为：" << endl;
    for(int m:a)//输出数组a中所有整数
    {
        cout << m << ' ';
    }
    cout <<endl;
    return 0;
}
