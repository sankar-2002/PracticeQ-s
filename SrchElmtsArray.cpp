#include <iostream>
using namespace std;

int main() {

    int m;
    int n;

    cin>>m;
    cin>>n;

    int arr[m][n];

    for(int i =0;i<m;i++) {
        for(int j=0; j<n;j++) {
            cin>>arr[i][j];
        }
    }

    cout<<"\n matrix accepted successfully";

    int target;
    cout<<"\n enter the value to be searched";
    cin>>target;

    int flag =0;

    for(int i =0;i<m;i++) {
        for(int j=0; j<n;j++) {

            if(arr[i][j]==target) {
               flag = 1;
            }
            
        }
    }

    if(flag == 1) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }



}