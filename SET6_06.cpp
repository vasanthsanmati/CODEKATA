#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int alp=0,num=0;
    cin>>a;
    int i,m;
    m =strlen(a);
    for(i=0;i<m;i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            alp=1;
        }
        if(a[i]>='0' && a[i]<='9')
        {
            num=1;
        }
    }
    if(num==1 && alp==1)
    { 
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
        
    return 0;
}
