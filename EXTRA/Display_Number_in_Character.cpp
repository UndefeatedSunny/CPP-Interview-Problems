#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,rem,rev=0,digit=0,x,y;
    cout << "Enter the number" << endl;
    cin >> num;
    
    while(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    y=rev;
    
    while(y>0)
    {
        x = y%10;
        y = y/10;
        
        switch(x)
        {
            case 1: cout<<"One ";
            break;
            case 2: cout<<"Two ";
            break;
            case 3: cout<<"Three ";
            break;
            case 4: cout<<"Four ";
            break;
            case 5: cout<<"Five ";
            break;
            case 6: cout<<"Six ";
            break;
            case 7: cout<<"Seven ";
            break;
            case 8: cout<<"Eight ";
            break;
            case 9: cout<<"Nine ";
            break;
        }
    }
    return 0;
}
