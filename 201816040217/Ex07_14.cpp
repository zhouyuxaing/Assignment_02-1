#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> shuzu;    //定义一个vector
    int i,a,j;
    int flag = 0;   //设置flag
    for(j = 0;j < 20;j++){
        cin>>a;
        flag = 0;   //每次将flag设为0
        if(a < 10 || a > 100) continue; //如果a不在范围内跳过此次循环
        for(int i : shuzu){
            //如果有重复的值用flag记录并跳出循环
            if(a == i){
                flag = 1;
                break;
            }
        }
        //如果没有重复的值，记录进vector
        if(flag == 0) shuzu.push_back(a);
    }
    //输出vector中记录的值
    for(int i : shuzu){
        cout<<i<<" ";
    }
    return 0;
}
