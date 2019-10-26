#include <iostream>
#include <vector>
using namespace std;
void add_member(vector<int> ai)
{
    int number,count_array=0;
    int flag=0;
    int i=0;
    cout<<"请依次输入N个数字,且数字范围在10到100,且不能重复，输入共20个"<<endl;
    for(i=0;i<20;i++)
    {
        cin>>number;
        if(number>=10&&number<=100)
        {
            for(int j=0;j<count_array;j++)
            {
                if(number==ai[j])
                {
                    flag = 1;
                    i--;
                }
            }
            if(flag==0)
            {
                ai.push_back(number);
                count_array++;
            }

            cout<<"已经输入了"<<count_array<<"个数字";

            flag=0;
        }

    }
    for(int j=0;j<count_array;j++)
        {
            cout<<ai[j]<<endl;
        }

}
int main()
{
    vector<int> ad ={0};
    add_member(ad);

}

