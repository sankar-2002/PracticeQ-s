#include <iostream>
using namespace std;

int main() {

    int testcases;
    cin>>testcases;

    while(testcases--) {
        int m,n;  //m = no of rows ....//n = no of columns
        cin>>m;
        cin>>n;

        int arr[m][n];

        int row = 0; //first row
        int col = 0; //first column

        for(int i = 0; i<m; i++) {
            for(int j=0; j<n; j++) {
                cin>>arr[i][j];
            }
        }

        while(row<m && col<n) {

            //printing 1st row...


            for(int i=col; i<n; i++) {

                cout<<arr[row][i]<<"\t";
            }
            row++;

            //printing last col...

            for(int i = row; i<m; i++) {
                cout<<arr[i][n-1]<<"\t";
            }
            n--;

            //printing last row..

            if(row<m) {
                for(int i = n-1; i>=col; --i) {
                    cout<<arr[m-1][i]<<"\t";
                }
                m--;
            }

            //printing first col...
            if(col<n) {
                for(int i = m-1; i>=row;--i) {
                    cout<<arr[i][col]<<"\t";
                }
                col++;
            }
        }

        cout<<"\n";
    }
    return 0;
}