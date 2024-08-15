#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
    int ticket_size,customer_size;
    cin>>ticket_size>>customer_size;
    
    multiset<int>tickets;

    for(int i=0; i<ticket_size; i++)
    {
        int x;
        cin>>x;
        tickets.insert(x);
    }
    for(int i=0; i<customer_size; i++)
    {
        int customer;
        cin>>customer;

        auto it = tickets.upper_bound(customer);
        if(it == tickets.begin())
            cout<<-1<<"\n";
        else
        {
            cout<<*(--it)<<"\n";
            tickets.erase(it);
        }
    }
    return 0;
}