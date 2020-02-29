#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num, rem=0, sum=0;
	cout<<"Enter a Number"<<endl;
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num=num/10;
	}
	cout<<"Sum of digits of "<<temp<<" is "<<sum;
	return 0;
}
