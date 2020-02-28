#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    long int in1=0,in2=1,c=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
   
    for(int i=0;i<num;i++)
    {
        if(i==0)
        {
            cout<<in1;
            continue;
        }
        else if(i==1)
        {
            cout<<" "<<in2;
            continue;
        }
        else
        {
            in1=in2;
            in2=c;
            c=in1+in2;
            cout<<" "<<c<<" ";
        }
    }
    return 0;
}
