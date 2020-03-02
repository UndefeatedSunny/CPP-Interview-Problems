#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,insert,pos;
    
    cout<<"Enter the no. of elements"<<endl;
    cin>>num;
    
    int arr[num+1];
    
    cout<<"Enter the elements"<<endl;
    
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter element to be insert :"<<endl;
	cin>>insert;
	cout<<"At which position (Enter index number) ? "<<endl;
	cin>>pos;
    
    for(int j=num+1;j>pos;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[pos]=insert;
    
    for(int k=0;k<num+1;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}
