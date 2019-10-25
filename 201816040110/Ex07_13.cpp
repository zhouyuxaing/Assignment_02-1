#include <iostream>

using namespace std;

int main()
{
    int array[20], a, i,z=0,j,b=0;
    for(i=0; i<20; i++)
    {
        cin >>  a;
        if(a>=10&&a<=100)
        {
            if(i==0)
            {
                array[0]=a;
            }
            else
            {
            for(j=0;j<i;j++)
            {
                if(a==array[j])
                {
                    b=1;
                }
            }
            }

        if(b==0)
        {
        array[ z ] = a;
        z++;
        }
        }
        b=0;
    }
    for(i=0;i<z;i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
