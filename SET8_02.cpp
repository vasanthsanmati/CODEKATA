#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
   char n;
   cin>>n;
   if(n=='a'|| n=='A' || n=='e' || n=='E' || n=='i'|| n=='I' || n=='o' || n=='O' || n=='u' || n=='U')
   {
       cout<<"yes";
   }
   else
   {
       cout<<"no";
   }
	return 0;
}
