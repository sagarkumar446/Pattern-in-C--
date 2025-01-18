#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter a number";
    int n;
    cin>>n;
    int k=0;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<=i;j++)
        { k++;
            cout<<k;
        }
        cout<<endl;

    }
    return 0;
}