#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a[20];
    vector<int> vec;
    cout<<"请输入20个整数,用空格隔开:"<<endl;
    //输入20个数到数组a中
    for(int i=0;i<20;i++){
        cin>>a[i];
    }
    //循环遍历数组a
    for(int j=0;j<20;j++){
        //判断是否符合10-100
        if(a[j]>=10&&a[j]<=100){
        //表示循环次数
        int k = 0;
        //遍历动态数组vec是否和整数a[j]相等，vec.size()表示vec这个动态数组的大小，里边有几次数据就是几
        for (; k < vec.size(); k++)
        {
            if (a[j] == vec[k])//判断是否相等
                break;//相等则跳出本次vec的遍历
        }
        //判断k的值，如果k<vec.size()，则必定跳出循环了，说明有相等的
        if (k == vec.size())
        {//如果k==n，说明没有相等的
             vec.push_back(a[j]);
        }
        }
    }
    for(int c=0;c<vec.size();c++){
            cout<<vec[c]<<" ";
    }
    return 0;
}
