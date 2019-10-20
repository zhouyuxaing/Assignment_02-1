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


#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{

    vector< int > dates(20);//dates是20个int值的数组
    vector< int > dates1(0);//dates1是一个初始为空的数组
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
        {
            dates1.push_back(dates[i]);//把符合条件的值添加到dates1数组中
        }


    }
    for(size_t i = 0; i < dates1.size(); ++i)
    {
        cout << setw(6)<<dates1[i];//输出过滤之后的值
    }

    cout << endl;
    return 0;
}
