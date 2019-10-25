#include <iostream>
#include<vector>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector< int >c;
	for(size_t i=0;i<20;++i){//将有效数字存入数组c 
		int x;
		cin >> x;
		if (x>=10 && x<=100)
		  c.push_back(x);
	}
	int cnt=0;
	for(size_t i=0;i<c.size();i++)//计算有效数字数量 
		if(c[i]!=0)
			cnt++;
	int count=0;
	for( size_t i=0; i<cnt;++i){//在数组c中去重得到结果 
		int flag=0;
		for(size_t j=0;j<i;j++){
			if (c[i]==c[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)
			c[count++]=c[i];
	}	
	for(size_t i=0;i<count;i++)
		cout<<c[i]<<endl;
	return 0;
}
