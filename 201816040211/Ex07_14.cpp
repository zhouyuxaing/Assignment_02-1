#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> items(1);
    int i,j,h,m=1;
    for(i=0;i<20;i++)
    {
        cin>>h; //输入数据
        if(h>=10 && h<=100) //判别数据是否合适
        {
            if(i>0)
            {
                for(j=0;j<i;j++)
                {
                    if(h==items[j]) //检查数据是否和之前的相同
                    {
                      m=0;
                    }
                }
                if(m==1)
                {
                    items.push_back(h); //把新数据存到items里面
                }
                else { m=1;}
            }
            else items[i]=h; // 存第一个数据
        }
    }

    for(int item: items)
    {
        cout << item << endl;
    }//输出items里的数据
}

