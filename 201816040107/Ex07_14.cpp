#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void output(const vector< int >&array)//输出函数； 
{
	for(int item: array)
	{
		cout<<item<<" ";
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	vector< int > n;
	int i,j,f=0,a;//i为输入20个数的循环变量；j为查重时循环变量；f为标记量； 
	for(i=0;i<20;i++)
	{
		f=0;
		cin>>a;
		if(a>=10 && a<=100)
		{
					if(i==0)
		{
			n.push_back(a);
			f=1;
		}
		for(j=0;j<n.size();j++)
		{
			if(a==n[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			n.push_back(a);
		}
		}
	}
	output(n);	
	return 0;
}
