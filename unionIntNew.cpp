#include <iostream>   //error in this code...
using namespace std;

int main() {

    int testcases;
    cin>>testcases;

    int M,N;
    int O = M+N;

    int arr1[M];
    int arr2[N];
    int arr3[O];


    while (testcases--) {

        cin>>M>>N;

        
        for(int l=0;l<M;l++) {
            cin>>arr1[l];
        }

        for(int r=0;r<N;r++) {
            cin>>arr2[r];
        }

        int i=0;
        int j=0;
        // int k=0;

        while (i<M && j<N) {
            while((i<M-1) && (arr1[i] == arr1[i+1])) {
                i++;
            }

            while((j<N-1) && (arr2[j] == arr2[j+1])) {
                j++;
            }

            if(arr1[i]< arr2[j]) {
                arr3[i] = arr1[i];
                i++;
            } else if (arr1[i]>arr2[j]) {
                arr3[j] = arr2[j];
                j++;
            } else {
                arr3[j] = arr2[j];
                j++;
                i++;
            } 
        }

        while(i<M) {
            if(i<M-1 && arr1[i] == arr1[i+1]) {
                i++;
            } else {
                arr3[i] = arr1[i];
                i++;
            }
        }


        while(j<N) {
            if(j<N-1 && arr2[j] == arr2[j+1]) {
                j++;
            } else {
                arr3[j] = arr2[j];
                j++;
            }
        }


        for(int a=0; a<O; a++) {
            cout<<arr3[a];
        }
        
    }
    return 0;
}