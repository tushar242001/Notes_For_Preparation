// Find the maximum and minimum element in an array

// Code : 
#include <bits/stdc++.h>
using namespace std;
void funct(int A[], int N)
{
    sort(A,A+N);
}
int main()
{
    int A[] = { 4, 9, 6, 5, 2, 3 };
    int N = 6;
    funct(A,N) ;
    
    cout<<"Minimum : "<<A[0]<<"  "<<"Maximum : "<<A[N-1]<<endl;
}
