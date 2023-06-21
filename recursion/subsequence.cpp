#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void call(int i, int n, vector<int>& arr, vector<int>& temp)
{
    if (i >= n)
    {
        sort(temp.begin(), temp.end());
        for (auto it : temp)
        {
            cout << it << " ";
        }
        if (temp.size()==0) cout<<"{}"<<endl;
        cout << endl;
        return;
    }
    temp.push_back(arr[i]);
    // cout<<"\n\nAt A"<<endl;
    call(i + 1, n, arr, temp);
    // cout<<"\n\nAt B"<<endl;
    temp.pop_back();
    call(i + 1, n, arr, temp);
}

int main()
{
    int n = 3;
    vector<int> arr = {1,2,3};
    vector<int> temp;
    call(0, n, arr, temp);
    return 0;
}
