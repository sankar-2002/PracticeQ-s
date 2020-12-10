// { Driver Code Starts        
#include <bits/stdc++.h>       
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    
	    int omax = INT_MIN;
	    int xin = arr[0];   //code breaks at few testcases...
	    int yin = arr[0];   //like when same -ve numbers are consecutively... 
	    
	    if(n==1) {
	        return arr[0];
	    }

        if(n==2 && arr[0]>arr[1]) {
            return arr[0];
        }
	    
	    for(int i=1; i<n; i++) {
	        
	        if(arr[i]==0) {
	            yin=1;
	            xin=1;
	            continue;
	        }
	        int temp = yin;
	        yin = max(arr[i],max(arr[i]*yin,arr[i]*xin));
	        xin = min(arr[i],min(arr[i]*temp,arr[i]*xin));
	        
	        if(omax <yin) {
	            omax = yin;
	        }
	    }
	    return omax;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        int ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends