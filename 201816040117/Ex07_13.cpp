#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i,j;//定义两个整数型数字做循环标记
    array <int,20>items={};//初始化一个长度为20的array数组items，初始值皆为0
    for(int &itemRef:items)
    {
        cin>>itemRef;
        if(itemRef<10||itemRef>100)
            itemRef=0;

    }//输入数字并读取有效数字（10-100）
    for(i=0;i<20;i++)
        for(j=i+1;j<20;j++)
       {
           if(items[j]!=0)
           if(items[j]==items[i])
            items[j]=0;

       }//去掉重复有效数字
    for(int item:items)
        if(item!=0)
        cout <<item<<" ";//输出有效数字
    return 0;
}
