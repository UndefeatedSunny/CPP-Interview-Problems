#include <bits/stdc++.h>             // MANDATORY CONDITION ---------->>>>>>>>>>>>>  { Elements must be in a SORTED order. }
#define ll long long int 
using namespace std;


int linear_search(ll arr[] , ll num , ll key)
{
    for(ll i=0;i<num;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Number Found at index number "<<i;
            return 0;
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
    
    linear_search(arr,num,key);

    return 0;
}

