#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
    while (l <= r)
    {
        int m = l + (r - l)/2;
        if (arr[m] == x)
        {
            return m;
        }
        if (arr[m]<x)
        {
            return l = m + 1;

        } 
        else {
            return r = m - 1;
        }
        
        
        
        
    }
    return -1;
    
    
}  

int main(void){
    int arr[] = {3, 4, 10, 34, 56, 533, 5, 34, 0};
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Not Found:" : cout << "Found: " << result;

    return 0;
}