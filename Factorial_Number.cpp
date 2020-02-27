#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,fact=1;
    cout << "Enter the value whose Factorial is to calculated" << endl;
    cin >> num;
    for(int i=num;i>0;i--)
    {
        fact *=i;
    }
    cout<<num<<"! = "<<fact;
    return 0;
}
