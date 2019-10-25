#include <iostream>
#include <vector>//插入vector的头文件

using namespace std;

int main()
{
    vector <int> c ={0};

    int variate,i,x,h=0,m=1;
    for(i=0;i<=19;i++)//输入20个数并判断是否为有效数字
    {
        cin>>variate ;
        m=1;
        if(variate>=10 && variate<=100)
        {
            if(h==0)
            {
                c[h]=variate;
                h++;
            }
            for(x=0;x<h;x++)
            {
                if(c[x]==variate)
                {
                    m=0;
                    break;
                }
            }//遍历看是否重复
            if(m==1)
            {
                c[h]=variate;
                h++;
            }
        }
    }
    int n=0;
    while(h--)
    {
        cout<< c[n] << " ";
        n++;
    }//输出
    return 0;
}
