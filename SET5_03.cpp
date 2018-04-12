#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
char str[100],str2[100];
int i=0,j=0;
cin>>str>>str2;
while(str[i]!='\0')
{
 i++;
}
while(str[j]!='\0')
{
 str[i]=str2[j];
 i++;
 j++;
}
cout<<str;
return 0;
}
