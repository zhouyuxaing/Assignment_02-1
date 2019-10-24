#include <bits/stdc++.h>
using namespace std;
int main()
{
	array<int, 200> a={0};
	for(int i=0;i<20;i++){
        int x;
        cin>>x;
        a[x]++;
	}
	for(int i=0;i<=100;i++){
        if(a[i])
            cout<<i<<' ';
	}
	cout<<endl;
	return 0;
}
