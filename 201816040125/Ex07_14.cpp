#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main()
{
    vector<int>integers1(20);     //定义
    vector<int>integers2(1);
    //vector<int>integers3(integers2);
    inputVector(integers1);       //输入20个数
    int n=0;
    for(size_t i=0;i<20;++i)
    {
        if(integers1[i]<10||integers1[i]>100)      //检查输入的数据是否正确
           {
           cout<<"输入错误"<<endl;
           n=1;
            break;
            }
    }
    if(n==0)
    {
    int a,b,c;
   for(a=0;a<20;a++)               //将20个数字排序（冒泡排序法：从大到小）
   {
       for(b=0;b<20;b++)
       {
           if(integers1[a]>integers1[b])
           {
               c=integers1[a];
               integers1[a]=integers1[b];
               integers1[b]=c;
           }
       }
   }



    integers2[0]=integers1[0];
    vector<int>integers3(integers2);
    for(size_t i=1;i<20;++i)     //输出不重复的数字
   {
       if(integers1[i]!=integers1[i+1])         //如果前后两个数不同，将n[i]插入到integers3中。
        integers3.push_back(integers1[i]);
   }
   outputVector(integers3);
    }
                     //输出integers3
   return 0;
    }




void inputVector(vector<int>&items)          //输入数字
{
    for(int &item:items)
        cin>>item;
}

void outputVector(const vector<int>&items)
{
    for(int item:items)
        cout<<item<<" ";
    cout<<endl;
}
