#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0,a[100],avg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    avg=sum/n;
    cout<<avg;
    return 0;
}
