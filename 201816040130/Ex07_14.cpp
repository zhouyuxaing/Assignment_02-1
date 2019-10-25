#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main()
{
    int k;
	vector <int> numbers; //定义vector
	int i,temp,j;
	array < int,20 > a;
	array < int,20 > b;
	cout << "Please enter 20 numbers: \n";
    for(i = 0;i < 20;i++)
    {
        cin >> a[i];  //输入20个数字
    }
	for (i = 0; i < 20; i++)  //排序
	{
	    for(j = 0;j < 20-i;j++)
	    {

            if (a[j] > a[j + 1])
            {
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
            }
	    }

	}

	for (i = 1; i < 20; i++)
	{
		if (a[i] != a[i-1] && a[i-1] >= 10 && a[i-1] <= 100) //去重
            numbers.push_back(a[i]); //存到vector中
    }
    for(int number:numbers)
        cout << number << " ";  //输出numbers中的数字
	return 0;
}
