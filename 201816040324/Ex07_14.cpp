  #include <iostream>
  #include <algorithm>
  #include <vector>
 using namespace std;


  int main()
{
     vector<int> a;
     for (int i = 0; i <=19; i++) {
     int temp;
     cin >> temp;
     a.push_back(temp);
    }
     sort(a.begin(),a.end());
     a.erase(unique(a.begin(), a.end()), a.end());
     for (int j = 0; j < a.size(); j++)
    {
         cout << a[j] << " ";
    }
}
