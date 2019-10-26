#include <iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 20> array1;//array1 is an array of 20 int values

    //initialize elements of array array1 to 0
    for(size_t i = 0; i < array1.size(); ++i)
        array1[i] = 0;//ɫt element at location i to 0

    int unsigned flag = 0;//a flag to count the number
    int unsigned num;//num is the user's input
    //input form user
    while(flag < 20)
    {
        cin>>array1[flag];//get a number from user
        ++flag;//update flag
    }
    //sort array1
    for(size_t i = 0; i < 19; i++)
        for(size_t j = i + 1; j < 20; j++)
    {
        if(array1[i]>array1[j])
        {
            int unsigned temp;//a temptation to sort the number
            temp = array1[i];
            array1[i] = array1[j];
            array1[j] = temp;
        }
    }
    //output the array1
    for(int k = 19; k >= 0; --k)
    {
        if(array1[k] <= 100 && array1[k] >= 10)
            {
                if(k == 19)//if it's the first number
                    cout<<array1[k]<<" ";//output
                else
                {
                    if(array1[k] != array1[k+1])//if it's equal to before it
                        cout<<array1[k]<<" ";//output
                }

            }
    }
    return 0;
}//end the process
