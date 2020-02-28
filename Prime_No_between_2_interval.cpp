#include <bits/stdc++.h>
using namespace std;

int main()
{
	int initial,i,end,count;
	
	cout<<"Enter the initial and final value"<<endl;
	cin >> initial >> end;
	
	cout << "Prime numbers between " << initial << " and " << end << " are: "<<endl;
        
	for(i=initial;i<=end;i++)
	{
	    count=0;
	    for(int j=2;j<=(i/2);j++)
	    {
	        if(i%j==0)
	        {
	            count++;
	            break;
	        }
	        
	    }
	    if(count==0)
	    {
	       
	        cout<<i<<" ";
	    }
	}
	return 0;
}
