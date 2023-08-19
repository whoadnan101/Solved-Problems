/* Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.

Example 1:

Input:
N = 6, X = 16
Arr[] = {1, 4, 45, 6, 10, 8}
Output: Yes
Explanation: Arr[3] + Arr[4] = 6 + 10 = 16 */

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	  sort(arr, arr+n);
        
        int i=0;
        int j=n-1;
        int sum=0;
        
        while(i<j){
            sum = arr[i] + arr[j];
            
            if(sum>x){
                j--;
            }
            else if(sum < x){
                i++;
            }
            else{
                return true;
            }
        }
        return false;
	}
};