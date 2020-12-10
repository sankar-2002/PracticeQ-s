#include <iostream>
using namespace std;

int main() {
    
    int testcases;
    cin>>testcases;
    
    while(testcases--) {
        int n;
        cin>>n;
        
        int arr[n];
        
        for(int i=0; i<n;i++) {
            cin>>arr[i];
        }
        
        int x = arr[n-1];
        
       
        
        for(int i=n-1;i>0;i--) {
            arr[i] = arr[i-1];  //shifting the elements by one...
        }
        arr[0] = x;     //assigning the value of first index as x
        
        for(int j=0;j<n; j++) {
            cout<<arr[j];
            cout<<" ";
        }
        cout<<"\n";
    }
	return 0;
}