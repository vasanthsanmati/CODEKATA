#include <iostream>
using namespace std;
int main()
{
   int h1,h2,min1,min2,t,t1,t2;
   cin>>h1>>min1;
   cin>>h2>>min2;
   t1=h1*60+min1;
   t2=h2*60+min2;
   t=t1-t2;
   cout<<(t/60)<<" "<<(t%60);
   return 0; 
}
