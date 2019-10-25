#include <iostream>
#include<vector>
#include<stdexcept>

using namespace std;

int main()
{
	int a, k;
	k = 0;
	vector<int>intls(0);
    for (size_t i = 0; i < 5; ++i) {
		cout << "please input data\n";
		cin >> a;
		if (a >= 10 && a <= 100) {
			for (size_t j = 0; j < i; ++j) {
				if (intls[j] == a) {
					k = 1;
					break;
				}
				k = 0;
			}
			if (k == 0) {
				intls.push_back(a);
			}
		}
		else {
			cout << "put error data\n";
			intls.push_back(1);
		}
	}
	//cout<<intls[2];
	for (size_t i=0; intls[i]!=1&&i<intls.size(); i++) {

                cout << intls[i];
                cout << "  ";

    }
	return 0;
}
