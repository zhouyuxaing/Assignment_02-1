#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 20> a;
    int i = 0, j = 0, k;
    int n;  //每次输入的数值
    int flag;   //判定输入的数是否与之前二点重复

    for(i = 0; i < 20; i++)
    {
        flag = 1;
        cin >> n;   //输入数值
        if(n < 10 || n > 100)
        {
            cout << "The data entered is invalid!" << endl << "Please enter again:";
            i--;    //若输入数值不符合要求，则重新输入
            continue;

        }

        for(k = 0; k < j; k++)
        {
            if(a[k] == n)
                flag = 0;   //若数值与之前的重复，则不放进数组里
        }

        if(flag)
            a[j++] = n;
    }

    for(i = 0; i < j; i++)
        cout << a[i] << " ";    //输出


    return 0;
}
