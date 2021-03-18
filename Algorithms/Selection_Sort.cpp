#include <bits/stdc++.h>
#define ll long long int 
using namespace std;


void print(ll arr[] , ll num)               // Printing 
{
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void swap(ll *n1 , ll *n2)                  // Swapping
{
    ll temp = *n1;
    *n1 = *n2;
    *n2 = temp;
} 
  

void selection_sort(ll arr[] , ll num)      // Sorting 
{   
    for(ll i=0;i<num-1;i++)
    {
        ll min=i;
        
        for(ll j=i+1;j<num;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)                          // Important Condition
        {
            swap(&arr[i],&arr[min]);
        }
    }
}


int main()                                  // Main
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
    
    selection_sort(arr,num);
    
    cout<<"AFTER SORTING : ";
    print(arr,num);
    
    return 0;
}
