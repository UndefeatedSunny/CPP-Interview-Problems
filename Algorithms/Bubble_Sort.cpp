#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;								
	int arr[num];
	int temp=0;
	
	for(int in=0;in<num;in++)    // Initialize or take the i/p from the user.
	{
	    cin>>arr[in];
	}
	
	// Bubble Short
	
	for(int i=0;i<num-1;i++)        // PASS 
	{
	    for(int j=0;j<num-1-i;j++)  // COMPARISION   -->> (num-1-i) is for ignoring comparisons of elements which have already been compared in earlier iterations
	    {
	        if(arr[j]>arr[j+1])
	        {
	            temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
	        }
	    }
	}
	for(int out=0;out<num;out++)      // SORTED O/P
	{
	    cout<<arr[out];
	}
	return 0;
}
