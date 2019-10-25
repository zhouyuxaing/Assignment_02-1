#include <iostream>
#include<array>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	array<int,20> c={0};
	array<int,20> res={0};
	for(size_t i=0;i<c.size();++i){//将有效数字存入数组c 
		int x;
		cin >> x;
		if (x>=10 && x<=100)
		  c[i]=x;
	}
	int cnt=0;
	for(size_t i=0;i<c.size();i++)//计算有效数字数量 
		if(c[i]!=0)
			cnt++;
	int count=0;
	for( size_t i=0; i<cnt;++i){//在数组c中去重
		int flag=0;
		for(size_t j=0;j<i;j++){
			if (c[i]==c[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)//将去重结果存入数组res 
			res[count++]=c[i];
	}	
	for(size_t i=0;i<count;i++)
		cout<<res[i]<<endl;
	return 0;
}
