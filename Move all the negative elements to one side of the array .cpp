//  Move all the negative elements to one side of the array 

// Code : 
// A C++ program to put all negative numbers before positive numbers
#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int i=0,j=0,k=n-1;
    while(j<=k)
    {
        if(arr[j]<0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==0)
        {
            j++;
        }
        else
        {
            swap(arr[j],arr[k]);
            k--;
        }
    }
}

// A utility function to print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

// Driver code
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}
