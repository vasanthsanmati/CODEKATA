#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,c=0,d=0;
    char str[100],str2[100];
    cin>>str>>str2;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>str2[i])
        {
            c++;
        }
        else if(str[i]<str2[i])
        {
            d++;
        }
    }
        if(c>d)
        cout<<"greater string "<<str<<"\n";
        else if(c<d)
        cout<<"greater string "<<str2<<"\n";
        else
        cout<<"equal";
    return 0;
}
