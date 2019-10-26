#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

bool isExist(const vector<int> &vec, int x); // 检查是否重复

int main()
{
    vector<int> vec;
    int x;

    for (int i = 0; i < 20; i++)
    {

        cin >> x;
        if (x < 10 || x > 100)
            continue;
        if (isExist(vec, x))
            vec.push_back(x);
    }

    for (int item : vec) // 遍历vector,相比array少了判断
        cout << setw(3) << item;
    cout << endl;
    return 0;
}

bool isExist(const vector<int> &vec, int x)
{
    for (int item : vec)
    {
        if (item == x)
            return false;
    }
    return true;
}
