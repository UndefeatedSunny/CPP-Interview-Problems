#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,lcm=0;
    
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    
    int n1=num1;
    int n2=num2;
    
    while(num1!=num2)                              // GDC or HCF
    {
        if(num1>num2)
        {
            num1 = num1-num2;
        }
        else
        {
            num2 = num2-num1;
        }
    }
    
    lcm = (n1*n2)/num1;
    
    cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<lcm<<endl;
    cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<num1;
    
    return 0;
}
