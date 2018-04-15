#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,f1=0,f2=1,f3;
cin>>n;
for(int i=0; i<n; i++)
{
cout<<f1<<"\n";
f3=f1+f2;
f1=f2;
f2=f3;
}
return 0;
}
