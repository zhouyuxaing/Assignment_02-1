#include <iostream>
#include <vector>//包含标准类模板vector的头文件
using namespace std;


int main()
{   int i,t,fla=1;
    vector< int > duplicate(20);// 创建存储int类型数值的vector对象
    cout<<"请输入20个数（大于等于10小于等于100）"<<endl;
    for(i=0;i<20;i++)
    {
        cin>>t;//输入数值
        if(t>=10&&t<=100)//判断输入数值是否合法
        {
            for(int item:duplicate)//查重
            {
                if(t==item)
                    fla=0;//如有重复，标记，
            }
            if(fla==1)
                duplicate.push_back(t);//若不重复，则添加至vector中
        }
        fla=1;//回复标记值

    }

    //输出数值
    for(int a:duplicate)
    {
        if(a!=0)
         cout<<a<<" "<<endl;
    }

    return 0;
}
