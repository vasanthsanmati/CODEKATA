#include <iostream>
using namespace std;
int main()
{
    char a[100],i;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>'a')&&(a[i]<'z'))
        {
            cout<<"numeric"<<" ";
        }
        else
        {
            cout<<"not a numeric"<<" ";
        }
    }
    return 0;
}
