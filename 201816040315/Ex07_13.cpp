#include <iostream>
#include <array>//包含头文件<array>

using namespace std;

int main()
{
    array< int, 20> duplicate={0};// 声明array对象
    int i,x,j;
    cout<<"请输入20个10~100的数字（包含10和100）: "<<endl;

    //读入20个数到array
    for(i=0;i<20;i++)
    {
        cin>>x;//输入
        if(x>=10&&x<=100)//判断输入数据是否合乎要求
         duplicate[i]=x;   //合乎要求的数据存入
    }

    //检查是否有重复数据，若有重复数据则取一个
    for(i=0;i<20;i++)
    {
        for(j=0;j<i;j++)
        {
            if(duplicate[i]==duplicate[j])
                duplicate[i]=0;
        }
    }

    //输出array中的数据
    for(int element:duplicate)
    {
        if(element!=0)
        cout<<element<<" "<<endl;
    }

    return 0;
}
