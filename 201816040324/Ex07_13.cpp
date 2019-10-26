#include<iostream>
using namespace std;
int main()
{
	for(int i,j;; )
	{
		int a[20];
		int b[20];
		for(i=0;i<20;i++)
			cin>>a[i];
		for(i=0;i<19;i++)
		{
			for(j=0;j<20-i-1;j++)
			{
				if(a[j]>a[j+1])
					swap(a[j],a[j+1]);
			}
		}
		int c=1;
		b[0]=a[0];
		for(i=1;i<20;i++)
		{
			if(a[i]!=a[i-1])
				b[c++]=a[i];
		}
		for(j=0;j<c-1;j++)
			cout<<b[j]<<' ';
		cout<<b[c-1]<<endl;
	}
 return 0 ;
}
