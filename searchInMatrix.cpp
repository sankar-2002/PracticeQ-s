#include "bits/stdc++.h"
using namespace std;
int main() {

    int n,m;  //n rows...m columns
    cin>>n>>m;

    int target;
    cin>>target;

    int mat[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
        }
    }

    bool found = false;
    int r=0,c=m-1; //initializing it to top right corner

    while (r<n && c>=0)
    {

        if(mat[r][c]== target) {
            found = true;
            cout<<r<<" " <<c<<endl; //gives the index
        }
        if(mat[r][c]>target) {
            c--;
        }else {
            r++;
        }
    }

    if(found) {
        cout<<"element is found";
    } else {
        cout<<"element does not exist";
    }
    



}