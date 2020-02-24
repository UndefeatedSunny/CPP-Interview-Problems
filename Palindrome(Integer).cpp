#include <bits/stdc++.h>

using namespace std;   //                                             I/P->__1221       O/P->____1221

int main()
{
    int n,r,rev=0,m;
    cout << "Enter the value of number" << endl;
    cin >> n;
    m = n;

    while(n>0)
    {
        r = n%10;
        rev = rev*10 + r;
        n = n/10;
    }
    cout <<"Reverse no. is "<<rev << endl;

    if(m==rev)
    {
        cout<<"The number is a Palindrome";
    }
    else
    {
        cout<<"The number is not a Palindrome";
    }

    return 0;
}
