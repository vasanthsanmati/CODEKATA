#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int i,n,a,n1;
cin>>i;
do
{
n1=i%10;
n=n1/10;
cout<<i;
}while(n>0);
return 0;
}
