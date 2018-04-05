#include<iostream>
using namespace std;
int main()
{
    int n,a,d,ans;
    cin>>n>>a>>d;
    ans=n*(2*a+(n-1)*d)/2;
    cout<<ans;
}
