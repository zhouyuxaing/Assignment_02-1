#include <iostream>
#include <iomanip>
#include <array>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	array <int ,20>n={0};
	int a,k=0,f=0,j=0;//f为标记量；j作为数组下标；k为查重循环变量； 
	for(size_t i=0;i<20;i++) //i是控制输入20个数的循环变量； 
	{	
		f=0;
		cin>>a;
		if(a>=10 && a<=100)
		{
				if(i==0)
				{
					n[j++]=a;
					f=1;
				}
				else
				{
					for(size_t k=0;k<j;k++)
					{
						if(a==n[k])
							f=1;
					}	
				}
				if(f==0)
					n[j++]=a;
		}
	}	
	for (int i=0;i<j;i++)
	{
		cout<<n[i]<<" ";
	}
	return 0;
}
