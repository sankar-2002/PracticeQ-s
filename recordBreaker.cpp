#include <iostream>
using namespace std;
int main() {
    int testcases;
    cin>>testcases;

    while(testcases--) {
        int n;
        cin>>n;

        int a[n+1]; //as we hyave to compare till i+1;
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        a[n] = -1; //last element ko -1 karna so that 2nd cond satisfy ho..

        if(n==1) {  //if there is only one element....
            cout<<"1"<<endl;
            return 0;
        }
        int ans = 0; //no fo record breaking days...
        int mx=-1; //to keep the track of max(a[i-1],a[i-2],a[i-3],........a[0]) 
                  // as in case of the first element only 2nd condition will be checked and there is the chance that 1st element may be record breaking..
                  //therefore initializing it to -1; as the elements cannot be negative here..

        for(int i=0; i<n; i++) {
            if(a[i]>mx && a[i]>a[i+1]) {
                ans++;
            }
            mx = max(mx,a[i]);
        }

        cout<<ans<<endl;


    }
}