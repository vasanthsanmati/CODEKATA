#include <iostream>
using namespace std;
int main()
{
    int i,n,a[100],temp,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
       for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
