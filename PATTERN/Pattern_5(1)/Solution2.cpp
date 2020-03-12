#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=num;j>=0;j--)
        {
            if(j==num && j>i)
            {
                cout<<"";
            }
            else if(j>i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
	return 0;
}
