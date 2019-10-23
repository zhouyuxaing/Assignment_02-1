#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,20>n={}; //创建一个含有20个元素并且元素都为0的array数组
    int i,j,n1,flag;
    for(i=0;i<20;++i)
    {
        cin>>n1;       //读取一个数
        if(n1<=100&&n1>=10)  //判断读取的数的范围
        {
            flag=0;
         for(j=0;j<=i;j++)
         {
             if(n1==n[j])
             {
                flag=1;   //如果读取的数在数组中已经存在，将flag置为1
                break;
             }
         }
            if(flag==0)
            {
                n[i]=n1;   //如果读取的数在数组中没出现，把读取的数放入数组
            }
        }
    }
    cout << endl;
    for(i=0;i<20;++i)
    {
        if(n[i]!=0)        //输出数组，若元素为0则不输出
        cout <<n[i]<<" ";
    }
    cout << endl;
    return 0;
}
