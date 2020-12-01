//Given an array Arr of N positive integers and another number X. Determine whether or not there exist two elements in Arr whose sum is exactly X.
//Time Complexity is O(NLOGN), space complexity is O(1)
// Accolite Amazon CarWale FactSet Flipkart Google Hike Microsoft Morgan Stanley SAP Labs Wipro Zoho

#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	     int left, right;
	    sort(arr, arr + n);
	    left = 0;
	    right = n-1;
      while(left<right) {
	        if(arr[left]+arr[right] == x) {
	            return 1;
	        }
	        else if(arr[left]+arr[right]<x) left++;
	        else right--;
	    }
	    return 0;
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
