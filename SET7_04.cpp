#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a;
    cin>>b;
    n=a+b;
    cout<<n<<"\n";
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
