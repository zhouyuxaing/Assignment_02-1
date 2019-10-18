#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

bool check(const array<int, 20> &, int); // 检查是否重复

int main()
{
    int x, cur = 0; // 读入x,cur 为当前array的大小
    array<int, 20> arr = {0};

    for (int i = 0; i < 20; i++)
    {
        cin >> x;
        if (check(arr, x))
        {
            arr[cur++] = x; // 如果没有重复,那么添加进array
        }
    }

    for (int item : arr)
    {
        if (item) // 遍历array,如果有值就输出
            cout << setw(3) << item;
    }
    cout << endl;

    return 0;
}

bool check(const array<int, 20> &arr, int x)
{
    for (int item : arr)
    {
        if (item == x)
            return false;
    }
    return true;
}