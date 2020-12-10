#include "bits/stdc++.h"
using namespace std;
int main() {

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];  //declaring char array
    cin.getline(arr,n); //to take a input of sentence with space
    cin.ignore();

    int currlen=0;
    int maxlen=0;
    int st=0;
    int maxst=0;
    int i=0;

    while(i<n) {

        if(arr[i] == ' ' || arr[i] =='\0') {  //reached a space or end
            if(currlen>maxlen) {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        } else {
            currlen++;
        }
        if(arr[i]=='\0') {  //reached the end...
            break;
        }

        i++;
    }

    cout<<maxlen<<endl;

    for(int i=0; i<maxlen; i++) {
        cout<<arr[i+maxst];
    }
    cout<<endl;



}