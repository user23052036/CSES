#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
 
int main() 
{
    int size, x,gondola=0;
    cin >> size >> x;
 
    deque<int> weight(size);
    for (int i = 0; i < size; i++)
        cin >> weight[i];
 
    sort(weight.begin(), weight.end());
    while (weight.size() > 1) 
    {
        if (weight[0] + weight.back() <= x) 
        {
            weight.pop_back(); 
            weight.pop_front();
        } 
        else 
            weight.pop_back(); 
        gondola++;
    }
    cout << gondola+weight.size();
    return 0;
}
