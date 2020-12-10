#include <iostream>
using namespace std;

struct Pair { //creating a struct to return multiple values..
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n)  //function to find minmax...
{

    Pair minmax; //obj for accesing the struct...
    int i;

    //if there is only one element then return the same as min and max..

    if(n == 1) {                                    //this method is called linear search..
        minmax.min = arr[0];
        minmax.max = arr[0];
    }

    //if there are more than one element then initialize min and max to first two starting elemnts of array..the compare

    if(arr[0]>arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    //succesfully initialized first two elements...

    for(int i = 2; i<n; i++) {
        if(arr[i]>minmax.max) {
            minmax.max = arr[i];
        }
        else if (arr[i]<minmax.min) {
            minmax.min = arr[i];
        }
    }

    return minmax;
}

int main() {
        int arr[] = {100,377,1000,24,12};
        int n = 5;

        Pair minmax =  getMinMax(arr,n); //calling the method...as the minmax was declared in last scope again declaring it here..

        cout<<"\n Max Value is "<<minmax.max;
        cout<<"\n Min Value is "<<minmax.min;

        return 0;
}


