#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,add,sub,mult,option;
    float div;

    cout << "CALCULATOR" << endl;
    cout << "1- Addition\n"<< "2- Subtraction\n"<< "3- Multiplication\n"<< "4- Division" << endl;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the option" << endl;
    cin >> option;

    switch(option)
    {
        case 1: add = a+b;
        {
            cout << "Output is " << add;
        }
        break;
        case 2: sub = a-b;
        {
            cout << "Output is " << sub;
        }
        break;
        case 3: mult = a*b;
        {
            cout << "Output is " << mult;
        }
        break;
        case 4: div = (float) a/b;
        {
            cout << "Output is " << div;
        }
        break;
        default: cout<<"Please choose right option";
    }
    return 0;
}
