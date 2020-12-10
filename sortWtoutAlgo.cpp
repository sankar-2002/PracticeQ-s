#include <iostream> 
using namespace std; 

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
    

    int temp;

    for(int i=0; i<n; i++) {   //swapping technique used for sorting
        for(int j =i+1; j<n; j++) {

            if(arr[i]>arr[j]) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        } 
    }

    for(int i =0; i<n; i++) {
        cout<<arr[i];
        cout<<" ";
    }
    
    cout<<"\n";
 
    
    }
    return 0;
}