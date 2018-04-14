#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int n,a[50],sum=0,avg,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
cout<<avg;
return 0;
}
