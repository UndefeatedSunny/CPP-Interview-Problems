#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,rem,temp,sum=0;
    int power=0;
    
    cout << "Enter the Number" << endl;
    cin >> num;
    
    temp = num;
    
    while (temp != 0)             // Calculate no. of Digits 
    {
        power++;
        temp = temp/10;           // -->> { DIGITS = 3 }     -->>      153 = (1^3 + 5^3 + 3^3)
    }
    
    temp=num;

    while(temp>0) 
    {
        rem = temp%10;
        sum = sum + pow(rem,power);
        temp = temp/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not a Armstrong Number";
    }
    return 0;
}
