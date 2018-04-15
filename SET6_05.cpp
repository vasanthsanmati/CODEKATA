#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int N,M,pro;
    cin>>N>>M;
    pro=N*M;
    if(pro%2==0)
    {
        cout<<"product is even";
    }
    else
    {
        cout<<"product is odd";
    }

    return 0;
}
