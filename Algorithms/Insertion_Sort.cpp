#include <iostream>
using namespace std;

int main() {
	int num,j;
	int temp=0;

	cin >> num;	
	int arr[num];
	
	for(int in=0;in<num;in++)           
	{
	    cin>>arr[in];
	}
	
	for(int i=1;i<num;i++)
	{
	    j=i-1;
	    temp=arr[i];
	    {
	        while(j>=0 && arr[j]>temp)  
	        {
	            arr[j+1]=arr[j];
	            j--;
	        }
	        arr[j+1]=temp;
	    }
    }
	
	for(int out=0;out<num;out++)
	{
	    cout<<arr[out]<<" ";	      
	}  
	return 0;
}
