#include <iostream>
#include <array>   //array weight removal header

using namespace std ;

int main()
{
   array <int ,20>n;//定义存储空间
   int i,j;
   int number;
   cout <<"请输入10个范围在10~100之间的整数"<<endl;
   for(size_t i=0;i<n.size();++i)
   {
        cin >> number;//输入数字

        if(number>=10&&number<=100)
           n[i]=number;
        for(size_t j=0;j<i;++j)
        {
            if(n[i]==n[j])
                n[i]=1;
        }
   }
   cout <<"输出有实际意义的数字元素\n";
   for(size_t i=0;i<n.size();++i)
   {
       if(n[i]!=1)
         cout <<n[i]<<endl;
   }

   return 0;
}
