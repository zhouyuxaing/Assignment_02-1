#include <iostream>
#include <array>
using namespace std;

int main()
{   int x,i,j;
    array< int,20> n={};//set element at location i to 0 
    for(i=0; i<20; ++i)
    {
        cin>>x; //read 20 numbers
        if( x>=10&&x<=100)//whether the size of the judgment number meets the conditions
        {
            n[i]=x;
            for(j=0; j<i; ++j)
            {
                if (n[i]==n[j])//compare the size  between numbers
                {
                    n[i]=0;
                }
            }
        }
    }
    //output the number of qualified conditions
    for(int k:n)
    {
        if(k!=0)
        {
            cout<<k<<" ";
        }

    }
    return 0;
}
