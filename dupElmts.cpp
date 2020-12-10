#include <bits/stdc++.h>     //only one duplicate number will be in the array
using namespace std;

int main() {
    int testcases;
    cin>>testcases;

    while(testcases--) {

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        sort(arr,arr+n);



        for(int i=1; i<=n; i++) {

            if(arr[i-1] == arr[i]) {
                cout<< arr[i];
            }

        }
        
    }
}
 