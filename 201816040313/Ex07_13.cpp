#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
const size_t arraySize = 20;//固定为20个数
int main()
{

    array< int, arraySize > dates;//dates是20个int值的数组
    for(size_t i = 0; i < dates.size(); ++i)
    {
        cin >>dates[i];//初始化数组
        for(size_t j = 0;j < i ; ++j)//标记相等的数值
        {
            if(dates[i]==dates[j])
                dates[i]=0;//把重复的值标记为0
        }


    }
    for(size_t i = 0; i < dates.size(); ++i)
    {
        if(dates[i]!=0)//过滤重复的值
            cout << setw(6)<<dates[i];//输出过滤之后的值
    }

    cout << endl;
    return 0;
}
