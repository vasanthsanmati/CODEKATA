#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"nearest even number"<<n;
    }
    else
    {
        cout<<n-1;
    }

    return 0;
}
