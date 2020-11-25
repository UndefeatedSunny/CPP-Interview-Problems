#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void print(ll arr[] , ll num)                   // Printing 
{
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void merge(ll arr[], ll l , ll m , ll r)
{
    ll i=l;                                     // Starting Index of Left Sub-Array
    ll j=m+1;                                   // Starting Index of Right Sub-Array
    
    ll k=l;                                     // Starting Index of Temporary Array
    
    ll temp[r+1];
    
    while(i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while(i<=m)
    {
        temp[k++]=arr[i++];
    }
    while(j<=r)
    {
        temp[k++]=arr[j++];
    }
    
    for(ll i=l;i<=r;i++)
    {
        arr[i]=temp[i];
    }
}


void merge_sort(ll arr[] , ll l , ll r)          // Sorting 
{
    if(l<r)                                     // Check whether sub-array has only one element remains or not
    {
        ll m = ((l+r)/2);
        
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
}


int main()                                       // Main
{
    ll num;
    cin>>num;
    
    ll arr[num];
    
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"BEFORE SORTING : ";
    print(arr,num);
    
    merge_sort(arr,0,(num-1));
    
    cout<<"AFTER SORTING : ";
    print(arr,num);
    
    return 0;
}
