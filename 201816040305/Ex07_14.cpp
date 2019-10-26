//author = LODJJ_李昊原_201816040305;
#include <iostream>
#include <vector>
using namespace std;

int yesorno( vector<int>  vec, int a)                                   //判断是否存在重复数字
{
    for(int j:vec)
    {
        if(a == j)
        {
            a=0;                                                        //若新输入的数字重复则将其变为0
        }
    }
    return a;                                                          //返回a 的值
}


int main()
{
    int a , b;
    vector<int> vec;                                                                      //定义vector数组
    vec.push_back(0);
    cout << "请输入20个数字:(输入后请按回车)"<<endl<<endl ;
    for(int i =0 ; i<20 ;i++){
            cout<<"这是第"<<(i+1)<<"个数字" <<"   ";
            cin>>a ;
            if(a>=10 && a<=100){
                    b = yesorno(vec , a) ;                                                //使用函数进行判断
                    vec.push_back(b);                                                     //将值写入vector数组
                }
    }
    for(int l:vec){                                                                       //遍历并输出
            if(l != 0)
            cout<<l<<"  " ;
    }

    return 0;
}

