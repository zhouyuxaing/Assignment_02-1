#include <iostream>
#include <array>
using namespace std;
int main()
{
	int i,temp,j;
	array < int,20 > a; //定义数组a
	array < int,20 > b; //定义数组b
	cout << "Please enter 20 numbers: \n";
    for(i = 0;i < 20;i++)  //输入20个数字存在a中
    {
        cin >> a[i];
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
		if (a[i] != a[i-1] && a[i] >= 10 && a[i] <= 100) //去重
			{
			b[i] = a[i];  //将a中符合条件的数字复制到b中
            cout << b[i] << " ";
            } //输出b中的数字
    }
    return 0;
}
