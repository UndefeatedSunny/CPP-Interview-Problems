#include<bits/stdc++.h>
using namespace std;
int main()
{
    int countp=0, countn=0, countz=0, num;
    
	cout<<"Enter the number of elements"<<endl;
	cin>>num;
	
	int arr[num];
	
	for(int i=0; i<num; i++)
	{
		cin>>arr[i];
	}
	for(int j=0; j<num; j++)
	{
		if(arr[j]<0)
		{
			countn++;
			continue;
		}
		else if(arr[j]==0)
		{
			countz++;
			continue;
		}
		else
		{
			countp++;
		}
	}
	cout<<"Positive Numbers = "<<countp<<endl;
	cout<<"Negative Numbers = "<<countn<<endl;
	cout<<"Zero = "<<countz;
	return 0;
}
