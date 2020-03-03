#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str1[20],str2[20];
	int len,len1,len2,found=0,not_found=0;
	cout<<"Enter first string :";
	cin>>str1;
	cout<<"Enter second string :";
	cin>>str2;
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
		len=len1;
		for(int i=0;i<len;i++)
		{
			found=0;
			for(int j=0;j<len;j++)
			{
				if(str1[i]==str2[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				not_found=1;
				break;
			}
		}
		if(not_found==1)
		{
			cout<<"Strings are not Anagram to each other";
		}
		else
		{
			cout<<"Strings are Anagram";
		}
	}
	else
	{
		cout<<"Two string must have same number of character to be Anagram";
	}return 0;
}
