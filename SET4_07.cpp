#include<iostream>
#include <stdio.h>
using namespace std;
int main() 
{
int a,b,temp;
cout<<"a and b before swapping"<<endl;
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"a and b after swapping"<<endl;
cout<<a<<" "<<b;
return 0;
}
