#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    int size,maxi=0,cnt=0;
    set<pair<int,bool>>st;
    cin>>size;

    while(size--)
    {
        int start,end;
        cin>>start>>end;

        st.insert({start,true});
        st.insert({end,false});
    }

    for(auto it:st)
    {
        if(it.second == true)
            cnt++;
        else
            cnt--;
        maxi = max(cnt,maxi);
    }
    cout<<maxi;
    return 0;
}
