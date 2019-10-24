#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< double, 20 >numbers;

    // input 20 number for nnmbers
    double number;
    for(size_t i=0; i<20; i++)
    {
        cin >>number;
        numbers[i]=number;
    }

    // check n to find different numbers, then printf it
    int flag;
    int j,k;
    for( j=0; j<numbers.size()-1; j++)
    {
        for( k=j+1; k<numbers.size(); k++)
        {
            if(numbers[j]!=numbers[k])
                {
                    flag=1;
                }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1&&numbers[j]>=10&&numbers[j]<=100)
            cout <<numbers[j]<<" ";
    }
    if(numbers[j]>=10&&numbers[j]<=100)
        cout <<numbers[j]<<endl;
}
