#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array <int, 20> items = {};
    int num,  count1 = -1, count2 = 0, result;
    //定义array以及输入值和计数器
    cout << "请输入10~100之间的数字（包含10和100）" << endl; //说明输入要求

    for(int i = 0; ; i++)
    {
        cin >> num;
        if(num < 10 || num > 100)
        {
            cout << "数字不符合题目要求,请重新输入:";
            continue;
        }
        count1++;
        items[count1]=num;
        if(count1==19)
            break;
    }

    //将后一位的数与前面所有的比较一遍，如果不相等，就加入array数组
    for(int j = 1; j<20; ++j)
    {
        for(int k = 0; k<j; ++k)
        {
            if(k == j){
                continue;
            }
            else{
                if(items[j] == items[k])
                {
                    result=0;
                    break;
                }
                else
                {
                    result=1;
                }
            }
        }
        if(result == 1){
            count2++;
            items[count2] = items[j];
        }
        cout << count2 << endl;
    }

    cout << "显示刚才输入的唯一值:";

    for(int q = 0; q<=count2; ++q) //打印结果
    {
        cout << items[q] << " ";
    }

    cout << endl;
}
