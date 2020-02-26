#include <iostream>

using namespace std;

int main() {
	int num;
	int minvalue;
	cin >> num;	
	int arr[num];
	
	for(int in=0;in<num;in++)            // Take I/P
	{
	    cin>>arr[in];
	}
	
	for(int i=0;i<num-1;i++)             // SWAP
	{
	    minvalue=i;
	    for(int j=i+1;j<num;j++)         // COMPARISON
	    {
	        if(arr[j]<arr[minvalue])
	        {
	            minvalue=j;
	        }
	    }
	    swap(arr[minvalue],arr[i]);                                      //     -->> {Another Method}    int temp = arr[minvalue];     
	}                                                                    //                                  arr[minvalue] = arr[i];
	                                                                     //                                  arr[i] = temp;          
	for(int out=0;out<num;out++)
	{
	    cout<<arr[out]<<" ";	      // O/P
	}  
	return 0;
}
