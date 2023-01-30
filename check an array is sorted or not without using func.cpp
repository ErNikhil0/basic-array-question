#include <bits/stdc++.h>
using namespace std;
 

int isSorted (int arr[], int n)
{
    
    if (n == 1 || n == 0)
        return 1;
 
    
    if (arr[n] < arr[n - 1])
        return 0;
 
   
    return isSorted(arr, n);
}
 

int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = 6;
    if(isSorted(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
} 
