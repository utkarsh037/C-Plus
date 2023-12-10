#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int x){
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[] = {1, 2, 3, 4 , 5, 6, 7, 8 , 9, 10};
    int N = sizeof(arr) / sizeof(arr[0]);
    int x = 96;

    int result = search(arr, N, x);
    (result == -1) ? cout << "Not Found" : cout << "Array Found";

    return 0; 

}