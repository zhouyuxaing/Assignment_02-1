#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int N=20;//Define constant N, easy to modify the length of read data
    int temp,flag,i,j=0;//A flag variable, j is array subscript
    array <int,N> items={};//The element is initialized to 0 when defined

    cout << "Please enter " << N << " numbers between 10 and 100 (including 10 and 100) and each number is separated by a space:" <<endl;
    for(i=0;i<N;i++)
    {
        cin >> temp;
        if(temp>100||temp<10)//Determine the validity of the data and mark its location
        {
            cout << "The number " << temp << " is invalid!" <<endl;
            continue;//The code does not execute after the data is invalid
        }
        flag=0;
        for(int item:items)
        {
            if(item==temp)
            {
                flag=1;//Tagged repeating element
                break;//Reduce cycle times
            }
            else if(item==0)
            {
                break;
            }
        }
        if(flag==0)//Insert non-repeating elements
        {
            items[j]=temp;
            j++;
        }
    }//The end of the input
    
    cout << "\nThe different numbers you entered are:" <<endl;
    for(int item:items)//Traverse the output
    {
        if(item!=0)
            cout << item <<" ";
        else
            break;
    }
    
    return 0;
}
