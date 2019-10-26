#include <iostream>
#include <iomanip>
#include <array>

using namespace std;


int main()
{
    array< int, 20> numbers={};//创建一个长度20array对象numbers并初始化为0。
    int a,j=0,flag,n=1;//a是输入数据；j，n控制下标；flag是标志变量。
    cout <<"请输入20个10到100的整数\n";
    cin >> a;
    numbers[0]=a;
    //输入第一个数据元素，并存入numbers第一个元素中。
    for(size_t i=1;i<20;++i)
    {
        cin >> a;//输入a。
        flag=1;//未发现相同元素。
        j=0;
        while(numbers[j]!=0)
        {
            if(a==numbers[j])
            {
                flag=0;
                break;
            }
            else
                j++;
        }
        //遍历numbers并和a进行比较。
        if(flag==1)
        {
            numbers[n]=a;
            n++;
        }
        //如果未发现相同元素，将a录入numbers。
    }
    cout <<"\n处理后的输入结果为：\n";
    for(j=0;numbers[j]!=0;++j)
        cout <<numbers[j]<<" ";
    cout <<endl;
    //输出整理后的结果。
    return 0;
}
