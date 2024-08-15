#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int size;
    cin >> size;
    set<int> st;
 
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
 
    cout << st.size();
    return 0;
}