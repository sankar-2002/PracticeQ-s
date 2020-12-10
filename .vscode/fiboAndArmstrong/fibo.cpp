#include <iostream>
using namespace std;
int main() {

    int testcases;
    cin>>testcases;

    while(testcases--) {

        int n;
        cin>>n;

        if(n==1) {
            cout<<"0";
        } else if(n == 2) {
            cout<<"0 1";
        } else {
            int a=0,b=1;
            int i=3;
            int fibo;

            cout<<a<<" "<<b<<" ";

            while(i<=n) {

                fibo = a+b;
                cout<<fibo<<" ";
                a = b;
                b = fibo;
                i++;
            }
        }

        cout<<"\n";
    }
}