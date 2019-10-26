#include <iostream>
#include <array>
using namespace std;
#include <algorithm>
int main()
{
    array<int,20> n;  //array of 20 int values
    int i,a=1,j;
    for(i=0;i<20;i++)
    {
        cin>>n[i];//initializ array

    }
   cout<<"\n";
   for(i=0;i<20;i++)
   {
       for(j=i+1;j<20

       ;j++)
       {
           if(n[i]==n[j])  //sort and duplicate checking
           {
               a=0;
               break;
           }
       }
        if(a==1)
                cout<<n[i]<<" ";

        if(a==0)
            a=1;


   }

    return 0;
}
