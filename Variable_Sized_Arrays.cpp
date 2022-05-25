#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int len, queries;
    cin >> len >> queries;
    vector<vector<int>> vecLen;
    int size;
    for (int i = 0; i < len; i++)
    {
        cin >> size;
        vector<int> vecSize;
        for (int j = 0; j < size; j++)
        {
            int value;
            cin >> value;
            vecSize.push_back(value);
        }
        vecLen.push_back(vecSize);
    }
    int indexLen, indexSize;
    for (int k = 0; k < queries; k++)
    {
        cin >> indexLen >> indexSize;
        cout << vecLen[indexLen][indexSize] << endl;
    }
    return 0;
}
