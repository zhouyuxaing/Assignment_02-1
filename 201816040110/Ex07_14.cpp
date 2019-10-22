#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, i,z=0,j,b=0;
    vector < int > c;
    for(i=0; i<20; i++)
    {
        cin >>  a;
        if(a>=10&&a<=100)
        {
            if(i==0)
            {
                c.push_back(a);
                b=1;
            }
            else
            {
            for(j=0;j<i;j++)
            {
                if(a==c[j])
                {
                    b=1;
                    break;
                }
            }
            }

        if(b==0)
        {
        c.push_back(a);
        z++;
        }
        }
        b=0;
    }
    for(i=0;i<c.size();i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
