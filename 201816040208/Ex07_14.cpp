#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< int > a( 0 );
    int i, j, k = 0;
    int n;  //每次输入的数值
    int flag;   //判断是否重复

    for(i = 0; i < 20; i++)
    {
        cin >> n;   //输入数值
        flag = 1;
        if(n < 10 || n > 100)
        {
            cout << "The data entered is invalid!" << endl << "Please enter again:";
            i--;    //若输入数值不符合要求，则重新输入
            continue;

        }

        for(j = 0; j < k; j++)
        {
            if(a[j] == n)
            {
                flag = 0;   //输入数字与之前重复
                break;
            }

        }

        if(flag)
        {
            a.push_back(n);    //将数放入vector数组中
            k++;
        }
    }

    for(i = 0; i < k; i++)
    {
        cout << a[i] << " ";    //输出
    }
    return 0;
}
