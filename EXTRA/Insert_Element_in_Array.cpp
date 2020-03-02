#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,insert,pos;
    
    cout<<"Enter the no. of elements"<<endl;
    cin>>num;
    
    int arr[num+1];                                   // [num+1] -> Becoz we want to insert one more element in array i.e future prospective.
    
    cout<<"Enter the elements"<<endl;
    
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter element to be insert :"<<endl;
	cin>>insert;
	cout<<"At which position (Enter index number) ? "<<endl;
	cin>>pos;
    
    for(int j=num+1;j>pos;j--)                       // Shift one value to insert the value in the selected position or index.
    {
        arr[j]=arr[j-1];
    }
    arr[pos]=insert;                                // Value inserted. 
    
    for(int k=0;k<num+1;k++)                        
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
