#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((j+i)%2==0)
            {
                cout<<0;
            }
            else{
                cout<<1;
            }
        }
        cout<<endl;
    }

    return 0;
}