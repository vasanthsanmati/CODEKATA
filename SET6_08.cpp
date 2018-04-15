#include<iostream>
#include <stdio.h>
using namespace std;
int main() 
{
int a,b,c;
cout<<"a and b before swapping"<<endl;
cin>>a>>b;
a=a^b;
b=a^b;
a=a^b;
cout<<"a and b after swapping"<<endl;
cout<<a<<" "<<b;
return 0;
