#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int num,i,flag=0;
cin>>num;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<"no";
}
else
{
cout<<"yes";
}
return 0;
}
