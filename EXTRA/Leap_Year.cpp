#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter the Year"<<endl;
    cin >> year;
    
    if((year%4==0) && (year%100!=0) || (year%100==0) && (year%400==0) || (year%400==0))
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not a Leap Year";
    }
}
