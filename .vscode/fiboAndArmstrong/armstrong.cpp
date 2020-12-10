//code to check whether the given number is armstrong or not...

#include <iostream>
using namespace std;
int main() {

    int testcases;
    cin>>testcases;

    while(testcases--) {
        int n;
        cin>>n;

        int orgnum = n;
        int sum=0;

        while(n>0) {
            int rem = n%10;
            sum = sum + rem*rem*rem;
            n = n/10;
        }

        if(orgnum == sum) {
            cout<<"The Number Is Armstrong"<<"\n";
        } else
        {
            cout<<"The Number Is Not An Armstrong"<<"\n";
        }
        
    }

    return 0;

}