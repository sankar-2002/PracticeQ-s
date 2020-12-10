#include <iostream>
using namespace std;
int main() {

    int testcases;
    cin>>testcases;

    while(testcases--) {
        int n,s;
        cin>>n>>s;

        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        int i=0,j=0;
        int st=-1,en=-1;
        int sum =0;

        while(j<n && sum+a[j]<=s) {
            sum = sum + a[j];
            j++;
        }
        if(sum == s) {
            cout<< i <<" "<<j-1<< endl;
            return 0;
        }
        while(j<n) {
            sum = sum + a[j];
            while(sum>s) {
                sum = sum - a[i];
                i++;
            }
            if(sum == s) {
                st = i;
                en = j;
                break;
            }
            j++;
        }

        cout<< st <<" "<< en <<endl; 
    }

    return 0;

}