#include <bits/stdc++.h>    
using namespace std;

int main()
{
    int i, j, k=8;
	for(i=0; i<5; i++)
	{
        for(j=0; j<k; j++)
		{
			cout<<" ";
		}
		k=k-2;
		for(j=0; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}
