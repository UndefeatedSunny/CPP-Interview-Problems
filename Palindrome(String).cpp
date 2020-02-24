#include <iostream>
#include<string>
using namespace std;
 
int main() {
    string s;
	getline(cin,s);									// Reading input from STDIN
	
	for(int i=0;i<=(s.size()/2);i++)                //   we can also use { s.length } provide same o/p
	{
	    if(s[i]!=s[s.size()-i-1])
	    {
	        cout<<"NO";
	        return 0;
	    }
	}
	cout<<"YES";
} 
