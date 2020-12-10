// Simple C++ program to find k'th smallest element 
#include <algorithm> 
#include <iostream> 
using namespace std; 
  
// Function to return k'th smallest element in a given array 
int kthSmallest(int arr[], int n, int k) 
{ 
    // Sort the given array 
    sort(arr, arr + n); 
  
    // Return k'th element in the sorted array 
    return arr[k - 1]; 
} 
  
// Driver program to test above methods 
int main() 
{ 
    
    int testcases;
    cin>>testcases;
    
    
    while(testcases--) {
        
    int n;
    cin>>n;
    int arr[n];
    
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    cout<<kthSmallest(arr, n, k); 
    cout<<"\n";
    
    }
    return 0;
    
} 