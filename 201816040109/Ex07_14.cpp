#include <iostream>
#include <vector>

using namespace std;


int main() {
    int input;
    vector<int> v;
    cout << "请输入20个在区间[10，100]的整数:" << endl;
    for (int i = 0; i < 20; i++) {
        cin >> input;
        if (input < 10 || input > 100) {    //判断输入是否符合格式
            i--;
            continue;
        }
        int flag = 1;
        for (int j:v) {
            if (j == input) {
                flag = 0;
                break;
            }
        }
        if (flag) {                         //判断是否输入的数与之前的相同
            v.push_back(input);
        }
    }
    for (int i:v) {                          //输出最后有效的数，不用像array一样判断
        cout << i << " ";
    }
    return 0;
}
