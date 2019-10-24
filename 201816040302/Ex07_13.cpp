#include <iostream>
#include <array>
using namespace std;

void number(array<int,20>arr)
  {
      cout<<"请输入20个数字"<<endl;
      for(int i=0; i<arr.length; i++)
     {
          cin>>arr;
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
    array<int, 20> x ={0};
    number(x);

}
