#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,temp;
    cin>>a>>b;
    cout<<"before swapping"<<"\n";
    cout<<a<<"\n"<<b<<"\n";
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<"\n";
    cout<<a<<"\n"<<b<<"\n";
    return 0;
}
