#include <iostream>
using namespace std;
int main()
{
    int i,n,arr[100],max;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
     cout<<max;
     return 0;
}
