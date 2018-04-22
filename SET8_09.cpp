#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int n,a,b,flag=0,i;
cin>>a>>b;
n=a*b;
for(i=1;i<=n/2;i++)
{
 if(i*i==n)
 {
     flag=1;
     break;
 }
 }
if(flag==1)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
return 0;
}
