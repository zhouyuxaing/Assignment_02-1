#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 20>items = {0};//Create an array;
	int i = 0,x,flag;
	while (i<20)
	{
		cin >> x;//Read integer data;
		if (x <10 || x > 100)
		{
			i++;
			continue;
		}
		flag = 1;
		for (int item : items)//Determine whether there is repetition;
		{
			if (item == x)
			{
				i++;
				flag = 0;
				break;
			}
		}
		if (flag == 1)//If there is no repetition in the array;
		{
			items[i] = x;
			i++;
		}
	}
	for (int item : items)//Outputs the number stored in the array;
	{
		if(item!=0)
			cout << item << " ";
	}
	cout << endl;
}
