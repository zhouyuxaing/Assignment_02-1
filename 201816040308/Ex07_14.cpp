#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>a;
    for(int i=0;i<20;i++){
        int x;
        cin>>x;
        vector<int>::iterator result = find( a.begin( ), a.end( ), x );
        if (result==a.end()){
            a.push_back(x);
        }
	}
	for(vector<int>::iterator i=a.begin();i!=a.end();i++){
            cout<<*i<<' ';
	}
	cout<<endl;
	return 0;
}
