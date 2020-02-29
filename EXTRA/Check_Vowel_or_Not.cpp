#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Character"<<endl;
    cin >> ch;
    
    if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'|| ch=='E'||ch=='I'|| ch=='O'||ch=='U')
    {
        cout<<"Vowel Verified";
    }
    else
    {
        cout<<"Vowel Invalid";
    }
}
