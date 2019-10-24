#include <iostream>
#include <array>

using namespace std;

int main()
{
    int number1,i,t,count=0,flag=0;
    array< int,20 >n={0}; // 定义一个array,大小为20

    for(i=0;i<20;i++)
    {
        cin>>number1; //输入

        if(number1>=10 && number1<=100) //判断输入的数是否符合条件
        {
            for(t=0;t<=count;t++)
            {
                if(n[t]==number1)
                flag=1;
            }//遍历n，判断是否重复
            if(flag==0)
            {
                n[count]=number1;
            }//不重复，存储
            else{
                n[count]=0;
            }
            count++;
            flag=0;

        }//符合条件的值存储进array；

    }//输入及存储结束

    for(i=0;i<=count;i++)
    {
        if(n[i])
        cout<<n[i]<<endl;
    }
}
