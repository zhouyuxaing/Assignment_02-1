#include <iostream>
#include<vector>//导入vector库
using namespace std;

int main()
{

    int q[5]= {10,56,84,16,18};
    vector<int> arr(q,q+5);//初始化
    int data;//读入数据
    int j=0;//vector的下边元素
    int flag=0;//判断是否重复
    for (int i=0;i<20;i++)
    {
        cin>>data;
        for(j=0;j<arr.size();j++)//遍历
        {
            cout<<arr[j]<<" ";
            if(arr[j]==data)
            {
                flag=1;

            }

        }
        if(flag==0)
        {
            arr.push_back(data);//将data推进arr最后
        }

     }
     j=0;//格式化下标
     for(j=0;j<arr.size();j++)//遍历
     {

         cout<<arr[j]<<" ";

     }

    return 0;
}
