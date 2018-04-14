#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int n1,n,sum=0;
cin>>n;
while(n>0)
{
n1=n%10;
n=n/10;
sum=sum+n1;
}
cout<<"\nSum of digits: "<<sum;
return 0;
}
