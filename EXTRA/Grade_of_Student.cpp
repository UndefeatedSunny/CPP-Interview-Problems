#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sub,total=0;
    float Avg=0;
    cout << "Enter the total no of subjects" << endl;
    cin >>sub;
    
    int arr[sub];
    
    cout << "Enter the marks of all subjects" << endl;
    for(int i=0;i<sub;i++)
    {
        cin>>arr[i];
    }
    
    for(int j=0;j<sub;j++)
    {
        total += arr[j];
    }
    Avg = (float) total/sub;
    
    cout << "Average of all " <<sub<< " subjects is "<< Avg << endl;
    
    if (Avg>70)
    {
        cout << "A Grade" << endl;
    }
    else if(Avg>=30 && Avg<=70)
    {
        cout << "B Grade" << endl;
    }
    else
    {
        cout << "C Grade";
    }
    return 0;
}
