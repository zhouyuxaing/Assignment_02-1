#include <iostream> 
 #include <vector> 
   using namespace std; 
   int main() 
 { 
 vector < int > v; //创建一个vector对象 
 int num,i,k,flag=0; 
 cout<<"请输入20个10-100的数字：\n"; 
 for(i=0;i<20;i++)//循环20次 
 { 
 cin>>num; 
 if(num<10&&num>100)//输入数字的范围不对就重新输入 
 { 
 cout<<"plese input again："<<endl; 
 cin>>num; 
 } 
 if(num>=10&&num<=100)//再正确的范围内查询是否有重复值并记录 
 { 
 for(int k:v) 
 { 
 if (num=k) 
 flag=1; 
 break; 
 } 
 if(flag=0) 
 { 
 v.push_back(num);//去重后把数字存入到vector中 
 } 
 } 
     } 
 for(int x: v) //打印去重后的结果 
 { 
 if(x!=0) 
 cout<<x<<" "; 
 } 
 return 0; 
 } 
