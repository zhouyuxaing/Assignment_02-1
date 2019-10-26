#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


int main()
{
    vector< int > numbers(0);//创建一个空的vector对象numbers。
    int a,j=0,flag;//a是输入数据；j控制下标；flag是标志变量。
    cout <<"请输入20个10到100的整数\n";
    cin >> a;
    numbers.push_back(a);
    //输入第一个数据元素并存入numbers中。
    for(size_t i=1;i<20;++i)
    {
        cin >> a;
        flag=1;//标志变量值为1表示未发现相同的元素。
        j=0;
        while(numbers[j])
        {
            if(a==numbers[j])
            {
                flag=0;//找到相同元素。
                break;
            }
            else
                j++;        
        }
        //从头到尾遍历numbers并和输入的a比较。
        if(flag==1)
        {
            numbers.push_back(a);
        }
        //如果未发现相同元素，将a插入numbers。
    }
    cout <<"\n处理后的输入结果为：\n";
    for(int number:numbers)
        cout << number <<" ";
    cout << endl;
    //输出结果。
    return 0;
}
