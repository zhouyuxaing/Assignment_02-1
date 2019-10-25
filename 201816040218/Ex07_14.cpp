#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "读入20个数字(在十和一百之间):" << endl;

    vector< int > n;
    int x, i=0, f;

        for(int item : n)
        cout <<item << " ";

    for(int k = 0 ; k < 20 ; k++)
    {
        f = 1;
        cin >> x;

        if(x<10||x>100)//判断数字有效性
            f=0;

        for(int j = 0 ; j < i ; j++)//去重
        {
            if(n[j] == x)
                f = 0;
        }

        if(f==1)
        {
            n.push_back(x);
            i++;
        }
    }

    for(int item : n)
        cout <<item << " ";
    //for(int j=0;j<i;j++)
       // cout <<n[j]<<" ";

    return 0;
}
