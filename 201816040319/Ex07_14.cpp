#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int >n(0);      //20-element vector <int>
   cout <<"请输入数据20~100范围内的元素"<<endl;
   int i,j;
   int number;
   cin >> number;
   n.push_back(number);
   for(size_t i=1;i<20;++i)
      {
          cin>>number;
          n.push_back(number);
          if(number>=10&&number<=100)
           {
              for(size_t j=0;j<i;++j)
             {
               if(n[j]==number)
                  n[i]=1;
             }

           }

      }

   cout <<"输出有实际意义的数字元素\n";

   for(size_t i=0;i<n.size();++i)
   {
       if(n[i]!=1)
         cout <<n[i]<<" ";
   }

   return 0;

}

