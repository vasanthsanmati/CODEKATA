#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[100];
    int i,count=0;
    gets(a);
    for(i=0;a[i]!='\0';++i)
    {
        if(a[i]==' ')
        count++;
    }
    cout<<count+1;
     return 0;
}
