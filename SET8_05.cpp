#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
   
	char str[30];
	int n,i;
	cin>>str;
	n=strlen(str);
	if(n%2==0)
	{
		str[n/2]='*';
		str[(n/2)-1]='*';
	}
	else
	{
		str[n/2]='*';
	}
	cout<<str;
   return 0;
}
