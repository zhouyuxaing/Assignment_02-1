#include <iostream>
#include<array>
#include<vector>
#include<stdexcept>

using namespace std;

void sort_vector(vector <int> &);//sort vector
void outputVector(const vector<int> &);//display the vector
void inputVector(vector <int> &);//input values into the vector
void pickUp(vector<int> &,vector<int> &);//pick up the number between 10 - 100
int main()
{
    const int N = 20;//define the length of the vector
    vector<int> integers1(N);//N-element vector<int>
    vector<int> integers2(N);//the same as integers1

    //input the data
    inputVector(integers1);
    //pickUp the effect value
    pickUp(integers1, integers2);
    //sort the vector
    sort_vector(integers2);
    //output the result
    outputVector(integers2);


}//end the process

//sort the vector
void sort_vector(vector<int> &items)
{
    for(int i = 0; i < items.size() - 1; i++ )
    {
        for(int j = i + 1; j < items.size(); j ++ )
        {
            int temp;// to switch the two value
            if(items[i]<items[j])
            {
                //switch the values
                temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
}
//output vector contents
void outputVector(const vector <int> &items)
{
    for(int i = 0; i < items.size(); i++)
    {
        if(i == 0 && items[i] != 0)
            cout<<items[i]<<" ";//output the first one
        else
        {
            if(items[i] != items[i - 1] && items[i] != 0)//if it's different with others
                cout<<items[i]<<" ";
        }
    }

    cout<<endl;
}//end function outputVector

//input vector contents
void inputVector(vector <int> &items)
{
    for(int &item : items)
        cin>>item;
}//end function inputVector

//pickUp the number
void pickUp(vector<int> &items1, vector<int> &items2)
{
    for(item : items1)
    {
        if(item <= 100 && item >= 10)
        {
            items2.push_back(item);//add item's value to the end of the vector
        }
    }
}
