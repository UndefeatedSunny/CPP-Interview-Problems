#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void print(ll arr[] , ll num)           // Printing 
{
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void insertion_sort(ll arr[] , ll num)     // Sorting 
{
    ll key;
    ll j=0;
    
    for(ll i=1;i<num;i++)
    {
        key = arr[i];
        j=i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main()                               // Main
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
    
    insertion_sort(arr,num);
    
    cout<<"AFTER SORTING : ";
    print(arr,num);
    
    return 0;
}
