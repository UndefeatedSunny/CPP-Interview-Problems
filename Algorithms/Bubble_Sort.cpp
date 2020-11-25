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


void swap(ll *n1 , ll *n2)              // Swapping
{
    ll temp = *n1;
    *n1 = *n2;
    *n2 = temp;
} 
    
void bubble_sort(ll arr[] , ll num)     // Sorting 
{
    for(ll i=0;i<num-1;i++)
    {
        for(ll j=0;j<(num-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
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
    
    bubble_sort(arr,num);
    
    cout<<"AFTER SORTING : ";
    print(arr,num);
    
    return 0;
}
