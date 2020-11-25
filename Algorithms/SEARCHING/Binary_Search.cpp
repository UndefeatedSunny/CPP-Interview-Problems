#include <bits/stdc++.h>             // MANDATORY CONDITION ---------->>>>>>>>>>>>>  { Elements must be in a SORTED order. }
#define ll long long int 
using namespace std;


int binary_search(ll arr[] , ll l , ll r, ll key)
{
    while(l<=r)
    {
        ll mid = l+((r-l)/2);
        
        if(arr[mid] == key)
        {
            cout<<"Number Found at index number "<<mid;
            return 0;
        }
        else if(arr[mid]<key)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout<<"Number not Found";
    return 0;
}


int main()
{
    ll num;                     // Size of the Array
    cin>>num;
    
    ll arr[num];                // Initialization of an Array
    
    for(ll i=0;i<num;i++)      
    {
        cin>>arr[i];
    }
    
    ll key;                     // The element to be searched.
    cin>>key;
    
    binary_search(arr,0,(num-1),key);
    return 0;
}
