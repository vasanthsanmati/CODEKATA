#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>a>>b;
    n=a-b;
    if(n%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }

    return 0;
}
