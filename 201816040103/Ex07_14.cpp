#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int>n;
	int i,j;
	int number;
	int flag=0;
	for(size_t i=0;i<20;i++)
	{
		flag=0;
		cin>>number;
		for(size_t j=0;j<n.size();j++)
		{
			if(n[j]==number)
			flag=1;
		}
		if(!flag)
			n.push_back(number);
	}
	for(size_t i=0;i<n.size();i++)
		cout<<n[i]<<endl;
	return 0;
}
