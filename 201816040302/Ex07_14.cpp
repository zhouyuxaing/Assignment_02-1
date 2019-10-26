#include <iostream>
#include <vector>
using namespace std;
void number(vector<int>arr)
  {
      cout<<"请输入20个数字"<<endl;      
        for(int j=0;j<arr.length;j++)
        {
              cin>>arr;
        }
    for(int i=0; i<arr.length; i++)

    {
          if(arr>=10&&arr<=100)
          {
            for(int j=i+1; j<arr.length; j++)
             {
                if(arr[i] == arr[j])
                {
                   arr.splice(j,1);
                    j--;
                }
             }
          }
      }
        for(int j=0;j<arr.length;j++)
        {
            cout<<arr[j]<<endl;
        }
    }
int main()
{
    vector<int> x ={0};
    number(x);
}
