#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    //double number;
    vector< double >n(20);
    vector< double >m(0);

    //input the vector<double>n
    int number;
    for(size_t k=0; k<n.size(); k++)
    {
        cin >> number;
        n[k]=number;
    }

    //record the count and push_back the different numbers in the vector<double>m
    int count=0, flag;
    for(size_t i=0; i<n.size(); i++)
    {
        for(size_t j=i+1; j<n.size(); j++)
        {
            if(n[i]!=n[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1&&n[i]>=10&&n[i]<=100)
        {
            count++;
            m.push_back(n[i]);
        }
    }

    //judege the last one;
    if(n[n.size()-1]>=10&&n[n.size()-1]<=100)
    {
        count++;
        m.push_back(n[n.size()-1]);
    }

    //output the vector<double>m after push_back
    for(int j=0; j<count; j++)
    {
        cout << m[j]<<" ";
    }
    cout<< endl;

}
