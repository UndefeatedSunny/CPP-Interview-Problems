#include <bits/stdc++.h>             // MANDATORY CONDITION ---------->>>>>>>>>>>>>  { Elements must be in a SORTED order. }
using namespace std;

int main()
{
    int num,key,i,mid;
    int l=0;                                                     // lower index value in array.

    cout<<"Enter the no elements"<<endl;                            
    cin >> num;
    
    int arr[num];                                                 // Array Size initialization.
    
    cout<<"Enter the elements"<<endl;                             //    I/P
    for(i=0;i<num;i++)
    {
      cin>> arr[i];
    }
    
    cout<<"Enter the number you want to search "<<endl;           // Element to found.
    cin >> key;
    
    int k=-1;
    int  t=num-1;                                                 // Higher index value in array.      
    
    while( l <= t )
    {
    //  mid = l + ( t-1 )/2; 
        mid = (l+t)/2;                                           // Comparision.
        if(arr[mid]==key)
        {
            k=mid;
        }
        if(arr[mid] < key)
        {
            l = mid+1;
        }
        else
        {
            t = mid-1;
        }
    }
    if(k!=-1)                                                    //  O/P
        cout<<"Number Found at index number "<<k;
    else
        cout<<"Number not Found";
    return 0;
}
