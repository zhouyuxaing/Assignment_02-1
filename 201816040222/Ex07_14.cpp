#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector < int > asd ;
     int x,m=0 ,i ;
    cout <<"请输入20个10~100的数" <<endl;
    for (i=1; i<=20; i++)
    {
        cin >> x;
        if   (x>=10&&x<=100)//判断x的范围是否符合要求
        {
            m=x;
        }
        for (int j=asd.size()-1;j>=0; j--)
        {
            if (m==asd[j])//判断存入的数据是否重复，重复则记为0
           m=0;
        }
        if (m!=0)
          asd.push_back(m);
    }
    for (unsigned i=0; i<asd.size(); i++)//输出满足要求的数据
    {
        if (asd[i]!=0)
            cout <<asd[i]<<" ";
    }
    return 0;
}
