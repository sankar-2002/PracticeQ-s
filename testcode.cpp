#include <iostream>
using namespace std;
int main()
{
    int testcases;
    cout<<"enter testcases";
    cin>>testcases;
    
    while(testcases--)
    {
        int n;
        cout<<"enter the number to find factorial";
        cin>>n;
        
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial is"<<fact<<"\n";
    }

    return 0;
}