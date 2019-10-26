//author = LODJJ_李昊原_201816040305;
#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a ;
    array<int , 20>arr  {0};                                       //定义数组并初始化其值全部为0
    cout << "请输入20个数字:(输入后请按回车)"<<endl<<endl ;
    for(int i =0 ; i < 20 ; i++){
            cout<<"这是第"<<(i+1)<<"个数字" <<"   ";
            cin>>a ;
            if(a>=10 && a<=100){
                arr[i] = a;                                        //将输入的值写入数组内
            for(int j=0 ; j < i ; j++){
                if (arr[i]==arr[j])                                //遍历数组的非0部分并判断是否有重复的地方
                    arr[i] = 0;                                    //若重复则将a[i]的值改写为0
            }
        }
    }
    for(int l:arr){                                                //遍历arr数组并输出所有不为0的值
        if(l!=0)    
        cout<<l<<" ";
    }
    return 0;
}
