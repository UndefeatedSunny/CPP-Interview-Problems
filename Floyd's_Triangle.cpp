#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=1;
    int num;
    
    cout<<"Enter the range"<<endl;
    cin>>num;
    
    cout<<"Floyd's Triangle is :"<<endl;
    
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i>=j)
            {
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}
