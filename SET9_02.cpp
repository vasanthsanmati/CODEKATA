#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,l,b;
    cin>>l>>b;
    a=l*b;
    std::cout<<fixed<<endl;
    std::cout<<std::setprecision(5);
    std::cout<<a;
    return 0;
}
