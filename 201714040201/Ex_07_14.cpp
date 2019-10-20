#include <iostream>
#include <array>
#include<vector>

using namespace std;

int main()
{
	vector<int>items ;//Create an vector array;
	int i = 20,x,flag;
	while (i--)
	{
		cin >> x;//Read integer data;
		if (x <10 || x > 100)
		{
			continue;
		}
		flag = 1;
		for (int item : items)//Determine whether there is repetition;
		{
			if (item == x)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)//If there is no repetition in the array;
		{
			items.push_back(x);
		}
	}
	for (int item : items)//Outputs the number stored in the array;
	{
		if(item!=0)
			cout << item << " ";
	}
	cout << endl;
}
