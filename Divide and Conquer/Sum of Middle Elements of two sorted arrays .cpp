/*
Given 2 sorted arrays A and B of size N each. Print sum of middle elements of the array obtained after merging the given arrays.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array. The second line contains the N space separated positive integers denoting the elements of array A. The third line contains N space separated positive integers denoting the elements of array B.

Output:
For each testcase, print the sum of middle elements of two sorted arrays. The number of the elements in the merged array are even so there will be 2 numbers in the center n/2 and n/2 +1. You have to print their sum.

Constraints:
1 <= T <= 50
1 <= N <= 103
1 <= A[i] <= 106
1 <= B[i] <= 106

Example:
Input :
1
5
1 2 4 6 10
4 5 6 9 12

Output : 
11

Explanation:
Testcase 1: After merging two arrays, sum of middle elements is 11 (5 + 6).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    long long int arr[2*n];
	    
	    for(long long int i=0;i<2*n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+(2*n));
	    
	    
	    cout<<arr[(2*n/2)-1] + arr[2*n/2]<<endl;
	    
	    
	    
	}
	return 0;
}