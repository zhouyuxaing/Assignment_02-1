#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int N = 20;
    array <int,N> a= {}; // 创建一个int类型的数组
    int number;
     cout<<"请输入20个10-100的数字："<<endl;
    for (size_t i=0; i<a.size(); ++i)//输入数字进行查重处理
    {
        cin>>number;

        if(number>=10 && number<=100)  //规定输入数字的范围
        {
            int flag=1;
            a[i]=number;
            if(i>=flag)  //判断存入的数字是否有相同的 标记相同的数字
            {
                for (size_t j=0; j<i; ++j)
                {
                    if(a[j]==number) //有相同的数字
                        a[i]='\*'; // 将重复的数字标记
                }
            }
        }
        if(number<10||number>100)//判断输入的数字是否合格
       {
           cout<<"输入的数不在范围内，请重新输入："<<endl;
           continue;
       }
    }
    cout <<"去重后的结果:"<<endl;
    for(int x:a)//去除相同的并输出
    {
        if(x=='*')
          continue;
        cout<<x<<" ";
    }
}
