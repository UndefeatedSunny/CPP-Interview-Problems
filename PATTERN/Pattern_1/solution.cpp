#include <bits/stdc++.h>  
using namespace std;

int main()
{
    int count=0;
    for(int i=0;i<4;i++)         // Rows
    {
        for(int j=0;j<4;j++)     // Columns
        {
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
