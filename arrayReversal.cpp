#include <iostream>
using namespace std;  //some git changes

int main()
{
    int testcases;
    cin>>testcases;
    
    
    while (testcases--)
    {

        int m;
        cout<<"enter the total number of integers in array ";
        cin>>m;

        int arr[m];

        int n = sizeof(arr)/sizeof(arr[0]);

        cout<<"enter the integers in the array ";

        for(int i = 0; i<n; ++i)
        {
           cin>>arr[i];
        }

        int temp;

        for(int i = 0; i<n/2; i++)
         {
           temp = arr[i];
           arr[i] = arr[n-i-1];
           arr[n-i-1] = temp;
         }

         cout<<"the Reversed array is ";

         for(int i = 0; i<n; i++) {
            cout<<arr[i];
            cout<<endl;
         }

    }
    return 0;
}