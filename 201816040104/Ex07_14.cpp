#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
using namespace std;
int main()
{
    vector < int > a(20);
    int b n[20];
    for(size_t i=0; i<20; i++)
    {
        cin >>b;
        n[i]=b;
    }
    int j,k;
    for( j=0; j<n.size()-1; j++)
    {
        for( k=j+1; k<n.size(); k++)
        {
            if(n[j]!=n[k]&&n[j]>=10&&n[j]<=100)
                break
            else

            a.push_back( n[j] );//找不同的数字输出
    }
    for(int m:a)//输出数组a中所有整数
    {
        cout << m << ' ';
    }
    cout <<endl;
    return 0;
}
