#include <bits/stdc++.h>
using namespace std;
 
bool comp(const pair<int, int> &el1, const pair<int, int> &el2)
{
    return el1.first < el2.first;
}
 
int main()
{
    int size, req;
    cin >> size >> req;
    vector<pair<int, int>> arr;
 
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back({x, i});
    }
    sort(arr.begin(), arr.end(), comp);
 
    int left = 0, right = size - 1;
    while (left < right)
    {
        int sum = arr[left].first + arr[right].first;
        if (sum == req)
        {
            cout << arr[left].second + 1 << " " << arr[right].second + 1;
            return 0;
        }
        else if (sum > req)
            right--;
        else
            left++;
    }
    cout << "IMPOSSIBLE";
    return 0;
}
