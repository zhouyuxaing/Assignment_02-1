#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<int,20>array_0,array_1={};//用array定义对象array_0和array_1
    int temp;
    int num=0;
    int flag=0,i;//定义常量num，i,flag和temp

    cout<<"please enter 20 numbers between 10 and 100"<<endl;
    for(int i = 0;i<20;i++)
    {
        cin>>temp;
        array_0[i] = temp;
    }//输入20个大于10小于100的整数并存入array_0中


    for(i= 0;i<20;i++)
    {
        flag=0;
        for(int j=0;j<=i-1;j++)
        {
            if(array_1[j]==array_0[i])
        {
            flag=1;
        }
        }
        if(flag==0)
        {

            array_1[num]=array_0[i];
            num++;

        }
    }//判断输入的20个数，若未重复则存入array_1中

    for(int x:array_1 )
    {
        if(x>=10&&x<=100)
        {
            cout<<x<<" ";
        }

    }//输出array_1,即去重后的数据

}
