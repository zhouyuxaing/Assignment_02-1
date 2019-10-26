#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int  figures[5]={"20", "30", "30", "50", "100"};
   vector<int>arr<figures, figures+5>;
   int date;
   int a=0;//无重复
   int j=0;
   for(i=1; i<=20;i++)
   {
       cin>>date;
       for(j=1; j<=arr.size(); j++)
       {
        cout<<arr[j]<<"";
       if(arr[j] == date)
       {
           a=1;
           break;
       }
       else
        arr.push_back(date);
   }
      for(j=1; j<=arr.size(); j++)

        cout<<arr[j]<<"";
   }
    return 0;
}
