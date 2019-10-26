#include <iostream>
#include<vector>
using namespace std;
void push_back();
int main()
{    vector<int>m(20);
vector<int>t(20);
int temp;
int x,num=0;
t[0]=m[0];
for(size_t i=0;i<m.size();++i)
{
    cin>>temp;

    if(temp>=10&&temp<=100)
    {
        x=temp;
    }

  m[i]=x;

}
//t(0)=m(0);
for(size_t i=0;i<m.size();++i)
{
    if(t[num]!=m[i])
    {
        t[num+1]=m[i];
        num++;
        t.push_back(t[num+1]);
    }
}
 for(int i=0;i<num+1;++i)
    {
        cout<<t[i]<<endl;
    }



    return 0;
}
