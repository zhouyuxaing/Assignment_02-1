#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{
    array< int, 20 >n;
    int a;
    for(size_t i=0; i<20; i++)
    {
        cin >>a;
        n[i]=a;
    }//读入20个数

    int j,k;
    for( j=0; j<n.size()-1; j++)
    {
        for( k=j+1; k<n.size(); k++)
        {
            if(n[j]=n[k])
                break
            else

            cout <<n[j]<<" ";//找不同的数字输出
    }
    if(n[j]>=10&&n[j]<=100)
        cout <<n[j]<<endl;

}
