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


void swap(ll *n1 , ll *n2)                      // Swapping
{
    ll temp = *n1;
    *n1 = *n2;
    *n2 = temp;
} 

ll Partition(ll arr[] , ll s, ll e)
{
    ll pivot = arr[e];
    ll pIndex = s;
    
    for(ll i=s;i<e;i++)
    {
        if(arr[i]<pivot)
        {
            swap(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    
    swap(&arr[pIndex],&arr[e]);
    
    return pIndex;
}


void Quick_sort(ll arr[] , ll s , ll e)          // Sorting 
{
    if(s<e)                                      // Check whether sub-array has only one element remains or not
    {
        ll p = Partition(arr,s,e);
        
        Quick_sort(arr,s,(p-1));                 // Recursive Quick Sort call for Left Partition 
        Quick_sort(arr,(p+1),e);                 // Recursive Quick Sort call for Right Partition 
    }
}


int main()                                       // Main
{
    ll num;
    cin>>num;
    
    ll arr[num];
    
    for(ll i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"BEFORE SORTING : ";
    print(arr,num);
    
    Quick_sort(arr,0,(num-1));
    
    cout<<"AFTER SORTING : ";
    print(arr,num);
    
    return 0;
}
