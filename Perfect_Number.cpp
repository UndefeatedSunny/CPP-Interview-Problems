#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int sum=0;
    
    cout<<"Enter the number"<<endl;
    cin>>num;
   
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==sum)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not Perfect Number";
    }
    return 0;
}
