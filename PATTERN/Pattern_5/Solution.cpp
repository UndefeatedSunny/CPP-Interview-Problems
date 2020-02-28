#include <bits/stdc++.h>    
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>=0;j--)
        {
            if(i<j)
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
