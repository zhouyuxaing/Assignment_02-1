#include <iostream>
#include<array>
using namespace std;
int main()
{
    int flag=0,i=0,j=0;
    array<int,20>n;//n is an array of 20 int values
    for(size_t i=0;i<n.size();++i)
   {
       if(n[i]>=10&&n<=100)//判断区间
       {
           if(n[i]!=n[i])//判断相等
            flag==1;
            continue;
       }
       if(flag==1)
       {
           cout<<endl;
       }
   }//output value
   for(size_t j=0;j<n.size();++j)
   {
       if(flag==0)
        cout<<n[j]<<endl;
   }
    
    return 0;
}
