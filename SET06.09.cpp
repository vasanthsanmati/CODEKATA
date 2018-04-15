#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int s[20],i,temp;
for(i=0;i<=10;i++)
{
cin>>s[i];
}
temp=s[1];
for(i=1;i<=10;i++)
{
if(temp<s[i])
{
temp=s[i];
}
}
cout<<temp;
return 0;
}
