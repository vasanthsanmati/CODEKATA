#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int a[20],i,temp;
for(i=0;i<=10;i++)
{
cin>>a[i];
}
temp=a[1];
for(i=1;i<=10;i++)
{
if(temp<a[i])
{
temp=a[i];
}
}
cout<<temp;
return 0;
}
