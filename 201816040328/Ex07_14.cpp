#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;



int main()
{
    int i,num;
    vector< int > a;//a ia a vector of NULL
    cout<<"请输入20个整数:"<<endl;
    for(i=0;i<20;i++)
    {

        cin>>num;//input a number;
        if(num<10||num>100)
        {
            cout<<"您输入的数据无效，请重新输入：";
            cin>>num;
        }//judge number is effective or not
        if(i==0)
            a.push_back(num);//if num is the first number ,put it in a
        else
        {
            int flag=0;//flag is a sign
            for(int j=0;j<i;j++)
            {
                if(num==a[j])
                {
                    flag=1;//if this number is repeaded with the previous number,the cycle is also skipped
                    continue;
                }   
                    
            }
            if(flag==0)//if this number is not repeated with the previous number ,put it in a 
               a.push_back(num);
        }
       
    }
    return 0;
}

