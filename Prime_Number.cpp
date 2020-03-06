#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,temp=0;
    cout << "Enter the number" << endl;
    cin >> num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp==0)
    {
        cout << "Prime number";
    }
    else
    {
        cout << "Not a prime number";
    }
    return 0;
}
