#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin>>testcases;


    while(testcases--) {

        int n;
        cin>>n;

        int arr[n];

        for(int i =0; i<n; i++) {
            cin>>arr[i];
        }

        int ans = arr[0];
        int maxSoFar = arr[0];

        for(int i =1; i<n; i++) {

            maxSoFar = max(arr[i],maxSoFar+arr[i]);

            if(maxSoFar>ans) {
                ans = maxSoFar;
            }
        }
        cout<<ans<<"\n";
    }
}
        