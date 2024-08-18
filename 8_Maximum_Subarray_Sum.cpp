#include<iostream>
#include<vector>
using namespace std;

long long int maxSubArraySum(vector<int>& arr) 
{
    long long int final_maxima=arr[0],temp_sum_max=arr[0];

    for(int i=1; i<arr.size(); i++)
    {
        temp_sum_max = max((long long)arr[i],arr[i]+temp_sum_max);
        final_maxima = max(final_maxima,temp_sum_max);
    }
    return final_maxima;
}


int main()
{
    int size;
    cin>>size;

    vector<int>arr(size);
    for(int i=0; i<size; i++)
        cin>>arr[i];
    cout<<maxSubArraySum(arr);
    return 0;
}