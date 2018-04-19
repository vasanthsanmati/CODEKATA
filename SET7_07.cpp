#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num%10!=0)
    {
        num=num+1;
    }
    cout<<num;
    return 0;
}
