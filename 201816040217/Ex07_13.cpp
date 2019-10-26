#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 20>shuzu {0};    //定义一个大小为20的array
    int j,a,cnt = 0;
    int flag = 0;   //设置flag
    for(j=0;j<20;j++){
        cin>>a;     //输入a的值
        flag = 0;   //每次将flag设为0
        if(a < 10 || a > 100) continue; //如果a不在范围内跳过此次循环
    for(int i : shuzu){
        //如果有重复的值用flag记录并跳出循环
        if(a == i){
            flag = 1;
            break;
        }
        if(i == 0) break;   //如果到了尾部跳出循环
    }
    //如果没有重复的值，记录进array
    if(flag == 0){
        shuzu[cnt] = a;
        cnt++;
    }
    }
    //输出array中记录的值
    for(int i : shuzu){
        if(i!=0)
        cout<<i<<" ";
    }
    return 0;
}
