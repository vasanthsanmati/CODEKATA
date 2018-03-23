#include <iostream>
using namespace std;

int main() 
{
	int n, count=0;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
			
		}
	}
	if(count==0)
	{
		cout<<"It is a prime no";
	}
		else
		{
		cout<<"It is not a prime no";
	}
	return 0;
}
