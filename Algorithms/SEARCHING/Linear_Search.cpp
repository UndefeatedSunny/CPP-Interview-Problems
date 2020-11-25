#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll n;
    cin >> n;
    
    ll arr[n];
        
    for(ll i=0;i<n;i++)
    {
      cin >> arr[i];
    }
    
    ll num;                     // The element to be searched.
    cin >> num;
    
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<"Number Found at index number "<<i;
            return 0;
        }
    }
    cout<<"Number not Found";
    return 0;
}
