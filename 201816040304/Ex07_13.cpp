//ex07_13
#include <iostream>
#include <array>
using namespace std;


int main()
{
    int a; //一个int变量用来存储输入的值
    int k=0; //K用来判断输入的值是否重复
    int j=0; //J为数组的下标

    array <int,5> n; // n is an array of 20 values
    cout << "please input 20 numbers, each of which is between 10 and 100, inclusive" << endl;

    // 开始输入数据并判断20个数据
    for(size_t i=0 ; i< n.size() ; ++i)
    {
        cin >> a; //把输入的数赋值给a
        // 判断是否是重复数字
        for(int c:n)
        {
            if(a==c)
            {
                k=1;
                break;
            }
        }
        //判断数值是否在范围内并存储输出
        if(k==0&&a>=10&&a<=100)
        {
           n[j] = a;
           cout << n[j] << " ";
           ++j;
        }
        k=0;
    }

    return 0;
}// end main
