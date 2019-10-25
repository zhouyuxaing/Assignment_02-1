#include <iostream>
#include <array> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    array<int,20>n;
    int i,j;
    int cnt=0;
    for(size_t i=0;i<20;i++)
    {
        int num;
        cin>>num;
        int flag=0;
        for(size_t j=0;j<cnt;j++){
            if(n[j]==num)
                flag=1;
        }
        if(!flag){
            n[cnt]=num;
            cnt++;
        }
    }
    for(size_t i=0;i<cnt;i++)
        cout<<n[i]<<endl;
    
    
}
	
