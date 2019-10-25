#include <iostream>
#include<array>

using namespace std;

int main()
{
	int a, k;
	k = 0;
	array< int, 5 > n;
	for (size_t i = 0; i < 5; ++i) {
		cout << "please input data\n";
		cin >> a;
		if (a >= 10 && a <= 100) {
			n[i] = a;
		}
		else {
			cout << "put error data\n";
			n[i] = 1;
		}
	}
	
	for (size_t i = 0; i<5; ++i) {
	
		for (size_t j = 0; j < i; ++j) {
			if (n[j] == n[i]) {
				k = 1;
				break;
			}
			k = 0;
		}
		if (k == 0 && n[i]!=1) {
			cout << n[i];
			cout << "  ";
		}
		
	}
	return 0;
}
