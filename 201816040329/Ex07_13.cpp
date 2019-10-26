#include <iostream> 
 #include<array> 
   using namespace std; 
   const unsigned int maxsize=20; 
 int main() 
 { 
 array<int,20> arr={}; 
 int num,target; 
 cin>>num; 
 if(num>=10&&num<=100) 
 { 
 for(int i=0;i<20;i++) 
 { 
 if(arr[i]!=0) 
 { 
 cout<<arr[i]<<endl; 
 } 
 else 
 { 
 break; 
 } 
   bool Found=false; 
 for(int i=0;i<20;i++) 
 { 
 if(arr[i]==num) 
 { 
 Found=true; 
 break; 
 } 
 else if(arr[i]==0) 
 { 
 break; 
 } 
 } 
 if(!Found) 
 { 
 i=-1; 
 } 
 return i; 
 } 
 cout<<endl; 
 } 
