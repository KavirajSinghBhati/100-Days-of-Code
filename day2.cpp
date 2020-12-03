#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

int main()
 {
    int t;  
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)   
        {
            cin>>arr[i];
        }
        vec = productExceptSelf(arr,n);  
        
        for(int i=0;i<n;i++)   
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) { 
    vector<long long int> prod(n,1);
    long long int product = 1;
    for(int i = 0; i<n; i++) {
        prod[i] = product;
        product*=nums[i];
    }
    product = 1;
    for(int i = n-1; i>=0; i--) {
        prod[i] *= product;
        product*=nums[i];
    }
    return prod;
}
