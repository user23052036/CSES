#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(pair<int,int>el1, pair<int,int>el2)
{
    return (el1.second<el2.second);
}

int main()
{
    int size,pre_finish=-1,movies=0;
    cin>>size;
    vector<pair<int,int>>interval(size);

    for(int i=0; i<size; i++)
        cin>>interval[i].first>>interval[i].second;
    sort(interval.begin(),interval.end(),comp);

    for(auto it:interval)
    {
        if(it.first >= pre_finish)
        {
            pre_finish = it.second;
            movies++;
        }
    }
    cout<<movies;
    return 0;
}