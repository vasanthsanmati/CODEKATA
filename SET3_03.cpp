#include <iostream>
using namespace std;
int main()
{
    int i,n,arr[100],min;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
     cout<<min;
     return 0;
}
