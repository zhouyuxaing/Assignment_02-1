#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int number1,i;
    vector<int> n1(0); // 定义一个vector,大小为0

    for(i=0;i<20;i++)
    {
        cin>>number1;//输入

        if(number1>=10&&number1<=100)
    {

              n1.push_back(number1);//push到vector队尾


    }//存储符合条件的值
    n1.erase(unique(n1.begin(), n1.end()), n1.end());
    }
    for(int x:n1)
    {
        cout<<x<<" ";
    }//输出vecto

}
