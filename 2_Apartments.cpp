#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
 
    int required[n],apartment[m];
    for(int i=0; i<n; i++)
        cin>>required[i];
    for(int i=0; i<m; i++)
        cin>>apartment[i];
    
    sort(required,required+n);
    sort(apartment,apartment+m);
 
    for(int i=0,j=0; i<n && j<m;)
    {
        if(required[i]>=apartment[j]-k && required[i]<=apartment[j]+k)
        {
            cnt++;
            i++;
            j++;
        }
        else if(required[i]<apartment[j]-k)
            i++;
        else 
            j++;
    }
    cout<<cnt;
    return 0;
