#include <iostream>

using namespace std;

int main()
{
    int n=0,a[20],array[20];
    cout<<"请输入20个整数,用空格隔开:"<<endl;
    //输入20个数到数组a中
    for(int i=0;i<20;i++){
        cin>>a[i];
    }
    //循环遍历数组a
    for(int j=0;j<20;j++){
        //判断是否符合10-100
        if(a[j]>=10&&a[j]<=100){
        int k = 0;
        //遍历数组array是否和整数a[j]相等
        for (; k < n; k++)
        {
            if (a[j] == array[k])//判断是否相等
                break;//相等则跳出本次array[k]的循环
        }
        //判断k的值，如果k<n，则必定跳出循环了，说明有相等的
        if (k == n)
        {//如果k==n，说明没有相等的
            array[n] = a[j];
            n++;
        }
        }
    }
    for(int c=0;c<n;c++){
            cout<<array[c]<<" ";
    }
    return 0;
}
