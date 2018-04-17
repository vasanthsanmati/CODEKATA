#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
   char s[100];
   int i,count=0,n;
   gets(s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
       if(s[i]==' ')
       {
            count=count+1;  
       }
    else
       {
           continue;
       }  
   }
	cout<<count+1;
	return 0;
}
