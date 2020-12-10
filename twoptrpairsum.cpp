#include <bits/stdc++.h>
using namespace std;

int pairsum (int arr[],int n,int k) {
    int low = 0;
    int high = n-1;
    int flag =0;

    while(low<high) {
        if(arr[low] + arr[high] == k) {
            flag =1;
            cout<<"Yes";
            return 0;
        }else if (arr[low] + arr[high] > k) {
            high--;
        }else {
            low++;
        }
    }

    if(flag ==0) {
        cout<<"No";
    }
    return 0;
}
int main() {  

    int testcases;
    cin>>testcases;

    while(testcases--) {
        int n;
        cin>>n;

        int k;
        cin>>k;

        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        pairsum(arr,n,k);

        

    }

    return 0;

}