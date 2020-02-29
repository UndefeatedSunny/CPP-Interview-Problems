#include <bits/stdc++.h>    
using namespace std;

int main()
{
    int num,i,j;
    cout<<"Enter the number of Rows"<<endl;
    cin>>num;
       
    for(i=0; i<num; i++)                      //ROWS
	{
		for(j=num; j>i; j--)                  // COLUMNS
		{
			cout<<" ";
		}
		int n=1;                              // PASCAL'S PATTERN
		for(j=0; j<=i;j++)
		{
		    cout<<" "<<n;
		    n = n*(i-j)/(j+1);                // ------------->>>>>>>>>  {IMPORTANT FORMULA}
		}cout<<endl;
	}
	return 0;
}


/* __________________________________________OUTPUT__________________________________________________________

Enter the number of Rows 
5   
                                                                                                                    
      1                                                                                                                                         
     1 1                                                                                                                                        
    1 2 1                                                                                                                                       
   1 3 3 1                                                                                                                                      
  1 4 6 4 1  
  
 */ 
