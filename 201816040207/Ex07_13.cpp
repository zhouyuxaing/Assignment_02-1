#include <iostream>
#include <array>//导入array库

using namespace std;

int main()
{

    const int N=100;//设置array的最大容量
    int data;
    int sum = 4;
    array<int,N> number= {10,16,80,29,30};//创建array数组
    for(int i=0;i<20;i++)//输入20个数
    {
        int flag=0,j=0;
        cin>>data;
        while(number[j]!=0)//循环到为0时停止
        {

            if(data==number[j])//判断是否重复
            {
                flag =1;
                break;
            }
            j++;
        }
        if(flag==0)//未重复时添加进入array中
        {

            number[++sum]=data;

        }

    }
    int j =0;//格式化下标

    while(number[j]!=0)//循环打印
    {

        cout<<number[j]<<" ";
        j++;
    }

    return 0;
}
