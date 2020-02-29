#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Character"<<endl;
    cin >> ch;
    
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<"Character Verified";
    }
    else
    {
        cout<<"Character Invalid";
    }
}
