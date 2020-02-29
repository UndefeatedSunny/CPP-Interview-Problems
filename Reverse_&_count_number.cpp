#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,rem,rev=0,digit=0;
    cout << "Enter the number" << endl;
    cin >> num;

   while(num>0)
    {
        digit++;
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    cout<<"Total number of Digits are: "<<digit<<endl;
    cout<<"Reverse number is: "<<rev;
    return 0;
}
