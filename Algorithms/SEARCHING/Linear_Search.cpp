#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,i;

    cout<<"Enter the no elements"<<endl;
    cin >> n;
    
    int arr[n];
        
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
      cin >> arr[i];
    }
    cout<<"Enter the number you want to search "<<endl;
    cin >> num;
    for(i=0;i<=n;i++)
    {
        if(num==arr[i])
        {
            cout<<"Number Found at index number "<<i;
            return 0;
        }
    }
    cout<<"Number not Found";
    return 0;
}
