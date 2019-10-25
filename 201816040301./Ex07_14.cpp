#include <iostream>
#include <vector>
using namespace std;
//const size_t arraySize=20;
void tianjia_number (vector<int>ai)
{
  int x,i;
  cout<<"输入20个10到100之间的数"<<endl;
  for(i=0;i<20;i++)
   {
       cin>>x;
  if(x<=100&&x>=10)
  {
      ai[i]=x;
      for(int j=0;j<i;j++)
      {
          if(ai[i]==ai[j])
            ai[i]=0;
      }
       cout<<ai[i]<<endl;
  }
   else
    cout<<"error"<<endl;

   }
}
int main()
{
   vector<int>tj={};
   tianjia_number(tj);
}
