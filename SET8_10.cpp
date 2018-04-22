#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int n1,r,q,n2;
cin>>n1;
while(n1!=0)
{
    r=n1%10;
    n1=n1/10;
    n2=n2*10+r;
}
while(n2!=0)
{
    r=n2%10;
    n2=n2/10;
    if(r%2==1)
    {
        cout<<r<<" ";
    }
}
return 0;
}
