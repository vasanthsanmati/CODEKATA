#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
   int arr[10], n, i, max, min;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<"\n";
    cout << "Smallest element : " << min;
    return 0;
}
