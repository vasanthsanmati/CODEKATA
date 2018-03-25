#include<iostream>
using namespace std;
int main()
{
    int n,num,sum=0,digit;
    cin>>n;
    n=num;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num%10;
    }
    if(sum==n)
    {
        cout<<"It is an Amstrong number";
    }
        else
        {
        cout<<"It is not a Amstrong number";
        }
    return 0;
}
